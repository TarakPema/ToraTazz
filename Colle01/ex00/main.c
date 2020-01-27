/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoates <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 13:58:23 by jcoates           #+#    #+#             */
/*   Updated: 2020/01/19 17:54:49 by jcoates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	array_create(char **args);
void	display_array(void);
int		is_x_y_valid(int in_x, int in_y, int value);
int		is_box_valid(int in_x, int in_y, int value);
int		solve(int x, int y);

int		g_sudoku[9][9];
int		g_tx;
int		g_ty;

int		equal_zero(int num, int x, int y)
{
	g_tx = 0;
	g_ty = 0;
	while (num < 10)
	{
		if (is_x_y_valid(x, y, num) == 1 && is_box_valid(x, y, num) == 1)
		{
			g_sudoku[y][x] = num;
			if (x == 8 && y == 8)
				return (1);
			if (x < 8)
				g_tx = x + 1;
			else if (y < 8)
			{
				g_tx = 0;
				g_ty = y + 1;
			}
			if (solve(g_tx, g_ty))
				return (1);
		}
		num++;
	}
	g_sudoku[y][x] = 0;
	return (0);
}

int		solve(int x, int y)
{
	int num;

	num = 1;
	if (g_sudoku[y][x] != 0)
	{
		if (x == 8 && y == 8)
			return (1);
		if (x < 8)
			x++;
		else
		{
			x = 0;
			y++;
		}
		if (solve(x, y))
			return (1);
		else
			return (0);
	}
	if (g_sudoku[y][x] == 0)
	{
		return (equal_zero(num, x, y));
	}
	return (0);
	write(1, "Error\n", 1);
}

int		main(int argc, char **argv)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (argc == 10)
	{
		array_create(argv);
		solve(x, y);
		display_array();
	}
	else
	{
		write(1, "Error\n", 6);
	}
}

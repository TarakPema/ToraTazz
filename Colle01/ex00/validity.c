/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoates <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 17:13:20 by jcoates           #+#    #+#             */
/*   Updated: 2020/01/19 17:13:23 by jcoates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_sudoku[9][9];

int		is_x_y_valid(int in_x, int in_y, int value)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x <= 8)
	{
		if (g_sudoku[in_y][x] == value && x != in_y)
		{
			return (0);
		}
		x++;
	}
	while (y <= 8)
	{
		if (g_sudoku[y][in_x] == value && y != in_x)
		{
			return (0);
		}
		y++;
	}
	return (1);
}

int		is_box_valid(int in_x, int in_y, int value)
{
	int box_x;
	int box_y;
	int x;
	int y;

	box_x = in_x / 3;
	box_y = in_y / 3;
	x = box_x * 3;
	y = box_y * 3;
	while (x >= box_x * 3 && x <= ((box_x * 3) + 2))
	{
		while (y >= box_y * 3 && y <= ((box_y * 3) + 2))
		{
			if (g_sudoku[y][x] == value)
			{
				return (0);
			}
			y++;
		}
		y = box_y * 3;
		x++;
	}
	return (1);
}

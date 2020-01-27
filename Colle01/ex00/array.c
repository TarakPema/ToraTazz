/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoates <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 16:51:22 by jcoates           #+#    #+#             */
/*   Updated: 2020/01/19 17:15:18 by jcoates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_sudoku[9][9];

void	array_create(char **args)
{
	int	i;
	int j;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (args[i][j] != '\0')
		{
			if (args[i][j] <= '9' && args[i][j] >= '1')
			{
				g_sudoku[i - 1][j] = args[i][j] - 48;
			}
			else if (args[i][j] == '.')
			{
				g_sudoku[i - 1][j] = 0;
			}
			else
			{
				write(1, "Error\n", 6);
			}
			j++;
		}
		i++;
	}
}

void	display_array(void)
{
	int		x;
	int		y;
	char	value;

	x = 0;
	y = 0;
	while (x <= 8)
	{
		while (y <= 8)
		{
			value = g_sudoku[x][y] + 48;
			write(1, &value, 1);
			if (y < 8)
				write(1, " ", 1);
			y++;
		}
		y = 0;
		write(1, "\n", 1);
		x++;
	}
}

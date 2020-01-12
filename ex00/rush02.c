/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 16:23:24 by tpema             #+#    #+#             */
/*   Updated: 2020/01/12 17:44:58 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y);

void	shape(int x, char start, char middle, char finish)
{
	if (x > 0)
	{
		write(1, &start, 1);
		while ((x - 1) > 1)
		{
			write(1, &middle, 1);
			x--;
		}
		if (x > 1)
		{
			write(1, &finish, 1);
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		shape(x, 'A', 'B', 'A');
		while ((y - 1) > 1)
		{
			shape(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
		{
			shape(x, 'C', 'B', 'C');
		}
	}
	else
		write(1, "Invalid Input! x must be greater than 0", 39);
}

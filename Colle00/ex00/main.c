/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 09:20:48 by tpema             #+#    #+#             */
/*   Updated: 2020/01/12 17:46:50 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

void	shape(int x, char start, char middle, char finish);

void	ft_putchar(char c);

int		main(void)
{
	rush(4, 4);
	return (0);
}

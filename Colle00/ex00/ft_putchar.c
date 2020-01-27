/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 09:22:41 by tpema             #+#    #+#             */
/*   Updated: 2020/01/12 17:42:07 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

void	shape(int x, char start, char middle, char finish);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

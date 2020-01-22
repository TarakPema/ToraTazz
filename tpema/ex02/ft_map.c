/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:29:15 by tpema             #+#    #+#             */
/*   Updated: 2020/01/21 09:33:17 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			*ft_map(int *tab, int length, int (*f)(int))
{
	int *result;
	int i;

	i = 0;
	result = (int *)malloc(length * sizeof(int));
	while (i < length)
	{
		result[i] = (*f)(tab[i]);
		i++;
	}
	return (result);
}

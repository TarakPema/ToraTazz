/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:07:37 by tpema             #+#    #+#             */
/*   Updated: 2020/01/11 17:07:28 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	
	i = 1;
	if (power > 0)
	{
		while (power != 0)
		{
			i *= nb;
			power--;
		}
		return (i);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	printf("%d", ft_iterative_power(5, 3));
	return (0);
}

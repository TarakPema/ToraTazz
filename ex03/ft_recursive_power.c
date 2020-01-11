/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 17:10:35 by tpema             #+#    #+#             */
/*   Updated: 2020/01/11 17:23:19 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int i;

	i = 1;
	if (power > 0)
	{
		while (power != 0)
		{
			ft_recursive_power(nb, power - 1);
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
	printf("%d", ft_recursive_power(4, 9));
	return (0);
}

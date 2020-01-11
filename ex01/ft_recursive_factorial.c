/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 13:40:04 by tpema             #+#    #+#             */
/*   Updated: 2020/01/11 15:04:51 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int i;

	i = 1;
	while (nb > 0)
	{
		ft_recursive_factorial(nb - 1);
		i = nb * i;
		nb--;
	}
	return (i);
}

int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
}

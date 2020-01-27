/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 15:30:52 by tpema             #+#    #+#             */
/*   Updated: 2020/01/09 17:01:07 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int num1;
	int num2;

	while (num1 <= '99' )
	{
		while (num2 <= '99')
		{
			ft_putchar(num1);
			ft_putchar(num2);
			if (num1 != num2)
			{
				write(1, ',', 1);
				write(1, ' ', 1);
			}
		}
	}
}

int	main(void)
{
	ft_print_comb2();
}

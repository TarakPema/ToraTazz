/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funk.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortuin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:45:51 by kfortuin          #+#    #+#             */
/*   Updated: 2020/01/24 15:28:33 by kfortuin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functs.h"
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
		return ;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int			ft_atoi(char **str)
{
	int	nbr;

	nbr = 0;
	while (**str >= '0' && **str <= '9')
	{
		nbr = nbr * 10 + (**str - '0');
		(*str)++;
	}
	return (nbr);
}

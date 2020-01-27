/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortuin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:57:36 by kfortuin          #+#    #+#             */
/*   Updated: 2020/01/23 14:06:44 by kfortuin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functs.h"
#include "eval_expr.h"

int		main(int argc, char **argv)
{
	if (argc >= 2)
	{
		ft_putnbr(eval_expr(argv[1]));
		ft_putchar('\n');
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortuin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 15:33:11 by kfortuin          #+#    #+#             */
/*   Updated: 2020/01/24 15:33:17 by kfortuin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functs.h"
#include "eval_expr.h"

int			pass_number(char **expr)
{
	int	nbr;

	while (**expr == ' ')
		(*expr)++;
	if (**expr == '(')
	{
		(*expr)++;
		nbr = pass_sum(expr);
		if (**expr == ')')
			(*expr)++;
		return (nbr);
	}
	return (ft_atoi(expr));
}

int			pass_factors(char **expr)
{
	int			nbr;
	int			nbr2;
	char		op;

	nbr = pass_number(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '/' && op != '*' && op != '%')
			return (nbr);
		(*expr)++;
		nbr2 = pass_number(expr);
		if (op == '/')
			nbr /= nbr2;
		else if (op == '*')
			nbr *= nbr2;
		else
			nbr %= nbr2;
	}
	return (nbr);
}

int			pass_sum(char **expr)
{
	int			nbr;
	int			nbr2;
	char		op;

	nbr = pass_factors(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '+' && op != '-')
			return (nbr);
		(*expr)++;
		nbr2 = pass_factors(expr);
		if (op == '+')
			nbr += nbr2;
		else
			nbr -= nbr2;
	}
	return (nbr);
}

int			eval_expr(char *expr)
{
	return (pass_sum(&expr));
}

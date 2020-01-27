/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortuin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:05:52 by kfortuin          #+#    #+#             */
/*   Updated: 2020/01/23 14:59:31 by kfortuin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

int		eval_expr(char *expr);
int		pass_sum(char **expr);
int		pass_factors(char **expr);
int		pass_number(char **expr);
#endif

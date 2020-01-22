/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:40:30 by tpema             #+#    #+#             */
/*   Updated: 2020/01/22 17:55:29 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	t_list *temp;
	int count;

	count = 0;
	if (!begin_list)
		return (count);
	temp = begin_list;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

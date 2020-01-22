/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:25:09 by tpema             #+#    #+#             */
/*   Updated: 2020/01/22 17:51:22 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void data)
{
	t_list *temp;

	if (*begin_list)
	{
		temp = ft_create_elem(data);
		temp->next = *begin_list;
		begin_list = temp;
	}
	else
		*begin_list = ft_create_elem(data);
}

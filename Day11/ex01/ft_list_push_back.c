/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:13:55 by tpema             #+#    #+#             */
/*   Updated: 2020/01/22 17:51:37 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *temp;

	if (begin_list)
	{
		temp = *begin_list;
		while (temp->next)
			temp = temp->next;
		temp->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

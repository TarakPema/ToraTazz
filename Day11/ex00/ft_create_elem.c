/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 10:14:13 by tpema             #+#    #+#             */
/*   Updated: 2020/01/22 17:51:56 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			*ft_create_elem(void *data)
{
	struct t_list *list;

	list = malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->data = data;
	list->next = NULL;
	return (list);
}

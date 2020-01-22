/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 09:58:01 by tpema             #+#    #+#             */
/*   Updated: 2020/01/22 15:21:28 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct				s_list
{
	struct s_list			*next;
	void					*data;
}							t_list;

t_list						*ft_create_elem(void *data);

#endif

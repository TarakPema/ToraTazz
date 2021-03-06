/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulitmate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:29:52 by tpema             #+#    #+#             */
/*   Updated: 2020/01/16 13:31:03 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		*ft_range(int **range, int min, int max)
{
	int *result;
	int count;

	if (max <= min)
		return (NULL);
	if (!(result = malloc(sizeof(int) * (max - min))))
	{
		result = NULL;
		return (0);
	}
	while (min <= max)
	{
		result[max - min - 1] = max - 1;
		max--;
		counter++;
	}
	*range = result;
	return (counter);
}

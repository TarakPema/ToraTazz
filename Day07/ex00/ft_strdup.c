/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:14:57 by tpema             #+#    #+#             */
/*   Updated: 2020/01/16 09:07:58 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *str;
	int i;
	
	i = 0;
	while (src[i] != '\0')
		i++;
	str = (char *) malloc(i*sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char source[] = "GeeksForGeeks";
	char* target;

	target = ft_strdup(source);
	printf("%s", target);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 19:23:45 by tpema             #+#    #+#             */
/*   Updated: 2020/01/10 20:14:37 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str[i], 1);
		i++;
	}
}
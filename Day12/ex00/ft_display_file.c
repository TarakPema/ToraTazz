/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpema <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:16:46 by tpema             #+#    #+#             */
/*   Updated: 2020/01/23 12:20:27 by tpema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	print_file(char *file_name)
{
	int		fd;
	char	buffer;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(2, "open() failed!\n", 15);
		return ;
	}
	while (read(fd, &buffer, 1) > 0)
		write(1, &buffer, 1);
	if (close(fd) == -1)
		write(2, "close() failed!\n", 16);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_file(argv[1]);
	else if (argc < 2)
		write(1, "File name is missing!\n", 22);
	else
		write(1, "Too many arguements!\n", 20);
	return (0);
}

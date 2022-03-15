/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:36:03 by iustoglu          #+#    #+#             */
/*   Updated: 2022/01/06 17:36:50 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	endline;

	if (s)
	{
		endline = '\n';
		while (*s != 0)
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, &endline, 1);
	}
}

/*
#include <fcntl.h>
#include <stdio.h>

int main ()
{
    int fd = open("test.txt", O_CREAT | O_RDWR, 0777);
    char *s = "Ecole";
    ft_putendl_fd(s, fd);
}
*/

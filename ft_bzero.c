/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:04:26 by iustoglu          #+#    #+#             */
/*   Updated: 2022/01/03 11:11:01 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!s)
	{
		return ;
	}
	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}

/*
#include <stdio.h>

int main(void)
{
    char str[50];
    ft_memcpy(str, "deneme mesajı", 50);
    printf("%s\n",str);
    ft_bzero(str, 2);
    printf("%s\n",str);
    return (0);
}
*/

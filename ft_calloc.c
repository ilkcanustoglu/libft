/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:43:45 by iustoglu          #+#    #+#             */
/*   Updated: 2022/02/04 09:50:08 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(size * count);
	if (!p)
		return (p);
	ft_bzero(p, (count * size));
	return (p);
}

/*
#include <stdio.h>

int main(void)
{
    int *ip, id;

    ip = (int *) calloc(10, sizeof(int));
    id = 0;

    while (id < 10)
    {
        id++;
        *(ip+id) = (id+1) * 5;
        printf("%p adresindeki değer: %d\n", (ip+id), *(ip+id));
    }

    free(ip);
}
*/

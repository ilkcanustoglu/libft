/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:37:16 by iustoglu          #+#    #+#             */
/*   Updated: 2022/02/07 11:56:10 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

/*
#include <stdio.h>
#include <string.h>

int        main(void)
{
    char    dest[50];
    char    *src;
    int        size;

    src = "11223344556";
    size = 10;
    printf("%zu\n", ft_strlcpy(dest, src, size));
    printf("%s\n\n", dest);
    printf("%lu\n", strlcpy(dest, src, size));
    printf("%s\n\n", dest);
}
 */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:01:55 by iustoglu          #+#    #+#             */
/*   Updated: 2022/01/03 15:10:20 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cmp_char(char c1, char c2)
{
	if ((unsigned char)c1 != (unsigned char)c2)
	{
		return ((unsigned char)c1 - (unsigned char)c2);
	}
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (cmp_char(s1[i], s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (cmp_char(s1[i], s2[i]));
	}
	return (0);
}

/*
#include <stdio.h>

int main ()
{
    const char *a = "Baba";
    const char *b = "Babaanne";
    int ret;
    ret = ft_strncmp(a,b,4);
    printf("%d\n",ret);
}
*/

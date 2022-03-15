/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:31:45 by iustoglu          #+#    #+#             */
/*   Updated: 2022/01/06 17:32:23 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	index = 0;
	if (s != NULL && f != NULL)
	{
		while (s[index] != 0)
		{
			f(index, &s[index]);
			index++;
		}
	}
}

/*
#include <stdio.h>

void my_func (unsigned int i, char *str)
{
    char str2;
    str2= *str;
    str2 -= 32;
    printf("%c\n",str2);
}



int main ()
{
    char *s = "deneme";
    ft_striteri(s,my_func);
}
*/

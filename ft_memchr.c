/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 16:57:00 by bthomas           #+#    #+#             */
/*   Updated: 2024/03/31 15:13:01 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ps;

	ps = (unsigned char *)s;
	while (*ps && *ps != c && n)
	{
		ps++;
		n--;
	}
	if (*ps == c)
		return ((void *)ps);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;
   size_t len = 20;

   ret = memchr(str, ch, len);
   printf("real: %s\n", ret);

   ret = ft_memchr(str, ch, len);
   printf("mine: %s\n", ret);
   return(0);
}
*/

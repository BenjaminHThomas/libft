/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:35:18 by bthomas           #+#    #+#             */
/*   Updated: 2024/04/12 11:16:31 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	a = s;
	while (n--)
		*a++ = c;
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	char *mine = str;
	char *real = str;
	ft_memset(mine + 13, 0, 8*sizeof(char));
	printf("mine:  %s", mine);
	memset(real + 13, 0, 8*sizeof(char));
	printf("\nreal:  %s", real);
	return 0; 
}
*/

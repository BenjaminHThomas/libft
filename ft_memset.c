/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:35:18 by bthomas           #+#    #+#             */
/*   Updated: 2024/03/27 13:47:02 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	a = s;
	while (n--)
	{
		*a++ = c;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str);
	// Fill 8 characters starting from str[13] with '.'
	ft_memset(str + 13, '.', 8*sizeof(char));
	printf("After memset():  %s", str);
	return 0; 
}
*/

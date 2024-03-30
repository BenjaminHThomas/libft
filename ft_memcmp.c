/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:37:19 by bthomas           #+#    #+#             */
/*   Updated: 2024/03/30 18:08:48 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;

	if (n == 0)
		return (0);
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	while (*ps1 != *ps2 && n && *ps1 && *ps2)
	{
		ps1++;
		ps2++;
		n--;
	}
	return (*ps1 - *ps2);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str1[15] = "abcdef";
	char str2[15] = "ABCDEF";

	int ret = ft_memcmp(str1, str2, 5);
	printf("%d", ret);
	return (0);
}
*/

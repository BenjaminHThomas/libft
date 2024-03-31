/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 09:29:03 by bthomas           #+#    #+#             */
/*   Updated: 2024/03/31 10:09:25 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*plit;
	const char	*pbig;

	while (*big && len)
	{
		plit = little;
		while (*big != *little && len && *big)
		{
			big++;
			len--;
		}
		if (*big == *little && len)
		{
			pbig = big;
			while (*big == *plit && len && *big && *plit)
			{
				big++;
				plit++;
				len--;
			}
		}
		if (!*plit)
			return ((char *)pbig);
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*big = "Find the WOW in this";
	char	little[10] = "this";
	big = ft_strnstr(big, little, 20);
	printf("%s", big);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 16:09:14 by bthomas           #+#    #+#             */
/*   Updated: 2024/04/10 18:47:23 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*ps;
	unsigned char	c2;

	if (!s)
		return (0);
	c2 = (unsigned char)c;
	ps = 0;
	while (*s)
	{
		if (*s == c2)
			ps = (char *)s;
		s++;
	}
	if (c == '\0' && *s == '\0')
		return (char *)s;
	return (ps);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str = "xhahaha Y wow Y pop Y boo";
	str = ft_strrchr(str, 0);
	printf("%s", str);
	return (0);
}
*/

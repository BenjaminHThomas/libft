/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 16:09:14 by bthomas           #+#    #+#             */
/*   Updated: 2024/03/30 16:38:54 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ps;

	ps = 0;
	while (*s)
	{
		if (*s == c)
			ps = (char *)s;
		s++;
	}
	if (ps == 0)
		return ((char *)s);
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

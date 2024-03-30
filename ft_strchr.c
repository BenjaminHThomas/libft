/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:42:29 by bthomas           #+#    #+#             */
/*   Updated: 2024/03/30 15:54:26 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != c && *s)
		s++;
	if (*s == c)
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str = "WowzeYrs  ppp";
	str = ft_strchr(str, 'Y');
	printf("%s", str);
	return (0);
}
*/

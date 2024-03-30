/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 16:42:37 by bthomas           #+#    #+#             */
/*   Updated: 2024/03/30 16:52:57 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 == *s2 && n)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("mine: %d\n", ft_strncmp("", "", 14));
	printf("real: %d\n", strncmp("", "", 14));
	return (0);
}
*/

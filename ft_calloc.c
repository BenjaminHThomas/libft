/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:26:22 by bthomas           #+#    #+#             */
/*   Updated: 2024/04/12 11:44:15 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stddef.h>
#include <stdlib.h>
#include <string.h>*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb);
	return (p);
}
/*
#include <stdio.h>
int	main(void)
{
	int size = 8539;
	void *d1 = ft_calloc(size, sizeof(int));
	void *d2 = calloc(size, sizeof(int));
	printf("%d", memcmp(d1, d2, size * sizeof(int)));
	return (0);
}
*/

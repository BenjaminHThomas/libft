/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 15:14:37 by bthomas           #+#    #+#             */
/*   Updated: 2024/03/31 16:15:45 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*ps;

	ps = (char *)s;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, ps + start, len + 1);
	return (sub);
}
/*
#include <stdio.h>
int	main(void)
{
	char	big[30] = "find the WOW in this";
	char	*small; 
	
	small = ft_substr(big, 9, 3);
	printf("%s", small);
	return (0);
}
*/

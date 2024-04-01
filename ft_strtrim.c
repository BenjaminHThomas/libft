/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 16:45:21 by bthomas           #+#    #+#             */
/*   Updated: 2024/04/01 11:07:25 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(int i)
{
	if (i == 32 || i == '\n' || i == '\t')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	int		endpos;
	char	*dest;

	while (is_whitespace(*s) && *s)
		s++;
	if (!*s)
		return ((char *)s);
	endpos = ft_strlen(s);
	while (is_whitespace(s[endpos - 1]) && s[endpos - 1])
		endpos--;
	dest = ft_calloc(endpos + 1, sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s, endpos + 1);
	return (dest);
}
/*
int	main(void)
{
	char	str[20] = "haha";
	char	*ret;

	ret = ft_strtrim(str);
	printf("%s", ret);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:48:52 by bthomas           #+#    #+#             */
/*   Updated: 2024/03/31 15:09:31 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*cpy;

	len = ft_strlen(s);
	cpy = ft_calloc(len, sizeof(char));
	if (cpy != NULL)
		ft_strlcpy(cpy, s, len);
	return (cpy);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[20] = "Wowzers";
	char	*strcpy = strdup(str);
	printf("%s", strcpy);
	return (0);
}
*/

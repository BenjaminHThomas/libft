/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:49:36 by bthomas           #+#    #+#             */
/*   Updated: 2024/03/30 12:47:25 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	char		*pd;
	const char	*ps;

	if (size == 0)
		return (ft_strlen(src));
	pd = dest;
	ps = src;
	while (size-- - 1 && *ps)
		*pd++ = *ps++;
	*pd = '\0';
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = ft_strlcpy(buffer,string, 2);

    printf("Mine: Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );

    buffer[19];

    r = strlcpy(buffer,string, 2);

    printf("Real: Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
		  );
}
*/

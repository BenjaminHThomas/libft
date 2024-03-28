/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:11:53 by bthomas           #+#    #+#             */
/*   Updated: 2024/03/28 19:26:46 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

#include <stdio.h>
int	main(void)
{
	char *str = "wowowwowowow";
	ft_bzero(str + 2, 5*(sizeof(char)));
	printf("%s", str);
	return (0);
}

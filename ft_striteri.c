/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 08:38:05 by bthomas           #+#    #+#             */
/*   Updated: 2024/04/08 09:08:09 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, s);
		i++;
	}
}
/*
#include <stdio.h>
void	example(unsigned int i, char *x)
{
	x[i] -= 1;
}

int	main(void)
{
	char	str[10] = "Howdy";
	ft_striteri(str, example);
	printf("\n%s\n", str);
	return (0);
}
*/

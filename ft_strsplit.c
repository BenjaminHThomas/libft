/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:11:17 by bthomas           #+#    #+#             */
/*   Updated: 2024/04/04 14:45:43 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_word(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)ft_calloc(end - start + 1, sizeof(char));
	if (!word)
		return (NULL);
	while (start <= end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**wlist;
	int		start;
	int		end;
	int		i;

	wlist = (char **)ft_calloc((ft_strlen(s) + 1), sizeof(char *));
	if (!wlist)
		return (NULL);
	start = 0;
	i = 0;
	while (s[start])
	{
		while (s[start] == c && s[start])
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		wlist[i] = get_word(s, start, end - 1);
		i++;
		start = end;
	}
	wlist[i] = 0;
	return (wlist);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[30] = "h";
	char	c = '*';
	char	**wlist = ft_strsplit(str, c);
	int		i;

	i = 0;
	while (i <= 1)
	{
		printf("%s ", wlist[i]);
		i++;
	}
	return (0);
}
*/

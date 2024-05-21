/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bthomas <bthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:07:01 by bthomas           #+#    #+#             */
/*   Updated: 2024/05/21 19:33:06 by bthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_list
{
        void                    *content;
        size_t                  content_size;
        struct s_list   *next;
}                                       t_list;

t_list  *lstnew(void *content)
{
        t_list  *newlst;

        newlst = (t_list *)malloc(sizeof(t_list));
        if (!newlst)
                return (NULL);
        newlst->content = content;
        newlst->next = NULL;
        return (newlst);
}
*/
int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
/*
int	main(void)
{
	t_list *l;
 	int actual;
 	int expected;

 	l = lstnew(strdup("1"));
 	l->next = lstnew(strdup("2"));
 	l->next->next = lstnew(strdup("3"));
 	expected = 3;
 	actual = ft_lstsize(l);
	printf("mine %d real %d", actual, expected);
	return (0);
}*/

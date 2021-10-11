/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncatrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:40:57 by ncatrien          #+#    #+#             */
/*   Updated: 2021/10/05 12:59:50 by ncatrien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelnode(t_list **alst, t_list *target, void (*del)(void*))
{
	t_list	*prev;
	t_list	*tmp;

	if (!alst || !*alst)
		return;
	prev = *alst;
	while (prev->next && prev->next != target)
		prev = prev->next;
	tmp = prev->next;
	if (!tmp)
		return ;
	prev->next = tmp->next;
	(*del)(tmp->content);
	free(tmp);
}
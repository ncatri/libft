/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_incharset.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <lfourmau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 07:36:21 by lfourmau          #+#    #+#             */
/*   Updated: 2021/11/09 07:36:29 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_is_incharset(char target, char *charset)
{
	if (!charset)
		return (FALSE);
	while (*charset)
	{
		if (target == *charset)
			return (TRUE);
		charset++;
	}
	return (FALSE);
}

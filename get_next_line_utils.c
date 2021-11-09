/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <lfourmau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 07:36:52 by lfourmau          #+#    #+#             */
/*   Updated: 2021/11/09 07:37:10 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	initialize_buf_c(t_buf *b, char *c)
{
	b->tmp = malloc(BUF_LINE_LIM * sizeof(char));
	b->pos = 0;
	b->size = BUF_LINE_LIM;
	*c = 'a';
	return (1);
}

int	free_and_zero(t_file **f)
{
	free(*f);
	*f = 0;
	return (0);
}

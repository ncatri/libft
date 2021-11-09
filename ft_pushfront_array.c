/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushfront_array.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <lfourmau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 07:36:43 by lfourmau          #+#    #+#             */
/*   Updated: 2021/11/09 07:36:50 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_error	ft_pushfront_array(void ***array, void *new_elt, size_t array_size)
{
	void	**new_array;

	if (!array)
		return (FAIL);
	new_array = malloc(sizeof(void *) * (array_size + 1));
	if (!new_array)
		return (FAIL);
	ft_memcpy(new_array + 1, *array, sizeof(void *) * array_size);
	new_array[0] = new_elt;
	free(*array);
	*array = new_array;
	return (SUCCESS);
}

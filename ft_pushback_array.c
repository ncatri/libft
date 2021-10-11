#include "libft.h"

t_error	ft_pushback_array(void ***array, void *new_elt, size_t array_size)
{
	void	**new_array;

	new_array = malloc(sizeof(void*) * (array_size + 1));
	if (!new_array)
		return (FAIL);
	ft_memcpy(new_array, *array, sizeof(void*) * array_size);
	new_array[array_size] = new_elt;
	free(*array);
	*array = new_array;
	return (SUCCESS);
}

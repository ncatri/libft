#include "libft.h"

t_error	ft_pushfront_array(void ***array, void *new_elt, size_t array_size)
{
	void	**new_array;

	if (!array)
		return (FAIL);
	new_array = malloc(sizeof(void*) * (array_size + 1));
	if (!new_array)
		return (FAIL);
	ft_memcpy(new_array + 1, *array, sizeof(void*) * array_size);
	new_array[0] = new_elt;
	free(*array);
	*array = new_array;
	return (SUCCESS);
}

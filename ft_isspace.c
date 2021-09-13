#include "libft.h"

t_bool	ft_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

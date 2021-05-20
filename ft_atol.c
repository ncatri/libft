#include "libft.h"

static int	my_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

long	ft_atol(const char *nptr)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (my_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		result = result * 10 + *nptr - '0';
		nptr++;
	}
	return (sign * result);
}

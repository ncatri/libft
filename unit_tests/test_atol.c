#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	long num;

	i = 1;
	while (i < argc)
	{
		num = ft_atol(argv[i]);
		printf("%ld |", num);
		i++;
	}
	printf("\n");
}


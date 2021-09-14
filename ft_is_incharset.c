# include "libft.h"

t_bool ft_is_incharset(char target, char *charset)
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

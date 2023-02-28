#include "ft_printf.h"

void	ft_print_str(char *str, size_t *i)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_print_char(*str, i);
		str++;
	}
}
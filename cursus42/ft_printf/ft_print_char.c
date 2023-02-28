#include "ft_printf.h"

void	ft_print_char(char c, size_t *i)
{
	write (1, &c, 1);
	(*i)++;
}
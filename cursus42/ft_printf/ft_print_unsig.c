#include "ft_printf.h"

void	ft_print_unsig(unsigned int n, size_t *i)
{
	if (n < 0)
	{
		n = -n;
	}
	if (n >= 10)
	{
		ft_print_unsig((n / 10), i);
		n = n % 10;
	}
	if (n < 10)
		ft_print_char(n + 48, i);
}
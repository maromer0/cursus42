#include "ft_printf.h"

void	ft_print_num(int n, size_t *i)
{
	if(n == -2147483648)
	{
		ft_printnum((n / 10), i);
		ft_printchar('8', i);
	}
	else if (n < 0)
	{
		ft_printchar('-', i);
		ft_printnum(-n, i);
	}
	else
	{
		if (n >=10)
			ft_printnum((n / 10), i);
		ft_printchar(('0' + n % 10), i);
	}
}
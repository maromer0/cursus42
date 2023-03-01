#include "ft_printf.h"

void	ft_print_hex(unsigned int n, size_t *i)
{
	char	str[25];
	char	*hex;
	int		j;

	hex = "0123456789abcdef";
	j = 0;
	if (n == 0)
	{
		ft_print_char('0', i);
		return ;
	}
	while (n != 0)
	{
		str[j] = hex[n % 16];
		n = n / 16;
		j++;
	}
	while (j--)
		ft_print_char(str[j], i);
}
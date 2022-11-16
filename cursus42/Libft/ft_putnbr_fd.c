

#include"libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char *s;

	s = ft_itoa(n);
	ft_putstr_fd(s, fd);
}

/* int main(void)
{
	ft_putnbr_fd(-4658, 2);
	return (0);
} */
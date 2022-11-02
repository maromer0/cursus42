/*compara los n primeros bytes de dos punteros y devuelve un valor entero, si es positivo
str1 es mayor, si es negativo str2 es mayor y si es 0 son iguales*/

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	s1;
	unsigned char	s2;

	while (n-- > 0)
	{
		s1 = *(unsigned char *)str1++;
		s2 = *(unsigned char *)str2++;
		if (s1 != s2)
			return (s1 - s2);
		if (s1 == '\0')
			return (0);
	}
	return (0);
}

int	main(void)
{
	int		ret;
	int t;
	char s1[] = "abcdef";
	char s2[] = "abbxfdxx";

	t = ft_memcmp(s1, s2, 2);
	printf("%d\n", t);
	ret = ft_memcmp(s1, s2, 2);
	if (ret < 0)
	{
		printf("str2 mayor str1");
	}
	else if (ret > 0)
	{
		printf("str1 mayor str2");
	}
	else
	{
		printf("str1 igual str2");
	}
	return (0);
}
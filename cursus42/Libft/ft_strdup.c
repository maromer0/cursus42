/*copia una string en una memoria reservada por malloc*/

#include"libft.h"

char *ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	str = ft_calloc(sizeof(char), (len + 1));
	len = 0;
	while (s[len])
	{
		str[len] = s[len];
		len++;
	}
	str[len] = '\0';
	return (str);
}

// int main(void)
// {
// 	printf("%s\n", ft_strdup(""));
// 	return(0);
// }
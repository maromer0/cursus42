/* reserva memoria y devuelve una substring de la string
principal desde start con longitud len */

#include"libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;

	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	substr = ft_calloc(sizeof(char), (len + 1));
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

/* int main(void)
{
	printf("%s\n", ft_substr("hola que tal, mi nombre es manuel alejandro.as", 14, 35));
	return (0);
} */
/* concatena 2 strings */

#include"libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	suma;
	int		i;
	int		j;

	i = 0;
	j = 0;
	suma = ft_strlen(s1) + ft_strlen(s2);
	result = ft_calloc(sizeof(char), (suma + 1));
	while(s1[i])
	{
		result[i] = s1[i];
		i++; 
	}
	while(s2[j])
	{
		result[i] = s2[j];
		j++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
/* 
int main (void)
{
	printf("%s\n", ft_strjoin("hola	","que tal"));
	return (0);
} */
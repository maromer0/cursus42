/* separa una string en 2 substrings en un array
dimensional terminado en un puntero NULL */

#include"libft.h"

char **ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	split = (ft_calloc(sizeof(char *), ft_strlen(s) + 1));
	while (s[k] != '\0')
	{
		split[j][i] = s[k];
		i++;
		if (c == s[k])
		{
			split[j][i] = '\0';
			j++;
			i = 0;
		}
		k++;
	}
	return(split);
}


int main (void)
{
	char	**split;
	size_t	i;
	size_t	j;

	split = ft_split("hola 1ue tal", '1');
	i = 0;
	j = 0;
	while (split[j][i] != '\0')
	{
		printf("%c", split[j][i]);
		i++;
		j++;
	}
	return (0);
}

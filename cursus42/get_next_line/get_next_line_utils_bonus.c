#include "get_next_line.h"

//concatena s1 + s2
char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len_s1;
	size_t	len_s2;

	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = (char *)malloc (sizeof(char) * (len_s1 + len_s2 + 1));
	if (!str)
		return (0);
	while (i < len_s1)
	{
		str[i] = s1[i];
		i++;
	}
	while (j < len_s2)
		str[i++] = s2[j++];
	str[i] = '\0';
	free (s1);
	return (str);
}

//mide la longitud de s
size_t	ft_strlen(char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

//devuelve la cadena de caracteres desde c si en cuentra c en la cadena
char	*ft_strchr(char *s, int c)
{
	unsigned char	c_unsigned;

	c_unsigned = c;
	if (c_unsigned == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (*s != '\0')
	{
		if (*s == c_unsigned)
			return ((char *)s);
		s++;
	}
	return (0);
}

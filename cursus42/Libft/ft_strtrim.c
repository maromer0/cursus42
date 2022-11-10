/* borra caracteres de s1 por delante y detras
de set hasta encontrar un valor que no este en set */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if(!s1 || !set)
		return (NULL);
	while(ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	len = ft_strlen((char *)s1);
	while(ft_strchr(set, s1[len]) && len != 0)
		len--;
	return (ft_substr((char *)s1, 0, (len + 1)));
}
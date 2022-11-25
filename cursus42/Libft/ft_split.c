/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:48:36 by maromero          #+#    #+#             */
/*   Updated: 2022/11/17 17:48:54 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* separa una string en 2 substrings en un array
dimensional terminado en un puntero NULL */

#include"libft.h"

/* cuenta cuantas substrings necesitamos */
static	size_t	ft_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (count);
}

static	char	**ft_free(char **s, size_t	i)
{
	while (s[i] != NULL)
	{
		free(s[i]);
		s[i] = NULL;
		i--;
	}
	free(s);
	s = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	count;
	char	**str;

	count = ft_count(s, c);
	if (!s || !(str = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len = 0;
			while (*(s + len) && *(s + len) != c)
				len++;
			if (i < count && !(str[i++] = ft_substr(s, 0, len)))
				return (ft_free(str, i));
			s = s + len;
		}
	}
	str[i] = 0;
	return (str);
}

/* int main (void)
{
	char	**split;

	split = ft_split("hola 1ue tal, com1 est1as?", '1');
	printf("%s\n", split[0]);
	printf("%s\n", split[1]);
	printf("%s\n", split[2]);
	printf("%s\n", split[3]);
	printf("%s\n", split[4]);
	return (0);
} */

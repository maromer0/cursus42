/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:48:36 by maromero          #+#    #+#             */
/*   Updated: 2022/11/29 13:30:38 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* separa una string en 2 substrings en un array
dimensional terminado en un puntero NULL */

#include"libft.h"

static	int	count_c(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	if (s[i] == c)
		count--;
	while (s[i] != '\0')
	{
		if ((s[i] == c) && (s[i + 1] != c) && (s[i + 1] != '\0'))
			count++;
		i++;
	}
	count++;
	return (count);
}

static	char	*count_str(char const *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *)malloc (sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		split;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	split = count_c(s, c);
	result = (char **)malloc(sizeof(char *) * (split + 1));
	if (!result)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			result[i] = count_str(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	result[i] = NULL;
	return (result);
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

#include "get_next_line_bonus.h"

char	*ft_update_memory(char *memory)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (memory[i] != '\0' && memory[i] != '\n')
		i++;
	if (!memory[i])
	{
		free(memory);
		return (0);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(memory) - i + 1));
	if (!str)
	{
		free(str);
		return (0);
	}
	i++;
	while (memory[i])
		str[j++] = memory[i++];
	str[j] = '\0';
	free(memory);
	return (str);
}

char	*ft_return_line(char *memory)
{
	int		i;
	char	*str;

	i = 0;
	if (!memory[i])
		return (0);
	while (memory[i] && memory[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (0);
	i = 0;
	while (memory[i] && memory[i] != '\n')
	{
		str[i] = memory[i];
		i++;
	}
	if (memory[i] && memory[i] == '\n')
	{
		str[i] = '\n';
		i++;
	}
	str [i] = '\0';
	return (str);
}

char	*ft_memory_read(int fd, char *memory)
{
	char	*store;
	int		byte;

	byte = 1;
	store = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!store)
		return (0);
	while (byte > 0)
	{
		byte = read(fd, store, BUFFER_SIZE);
		if (byte == -1)
		{
			free(store);
			free(memory);
			return (0);
		}
		store[byte] = '\0';
		memory = ft_strjoin(memory, store);
		if (ft_strchr(store, '\n'))
			break ;
	}
	free(store);
	return (memory);
}

char	*get_next_line(int fd)
{
	static char	*memory[4096];
	char		*return_line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 4096)
		return (0);
	memory[fd] = ft_memory_read(fd, memory[fd]);
	if (!memory[fd])
		return (0);
	return_line = ft_return_line(memory[fd]);
	memory[fd] = ft_update_memory(memory[fd]);
	return (return_line);
}
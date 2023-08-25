#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int fd;
	char *str;

	fd = open("prueba.txt", O_RDONLY);

	str = get_next_line(fd);

	while (str != NULL)
	{
		printf("cadena leida: %s", str);
		str = get_next_line(fd);
	}
	close (fd);
	return (0);
}
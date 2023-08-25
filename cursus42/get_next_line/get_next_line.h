#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif 

char	*get_next_line(int fd);
char	*ft_memory_read(int fd, char *memory);
char	*ft_return_line(char *memory);
char	*ft_update_memory(char *memory);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);

#endif
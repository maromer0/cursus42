/*asigna la memoria requerida, la deja vacía y devuelve un puntero a ella*/

#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    void    *emptymem;
    size_t  result;

    result = nitems * size;
    if (!(emptymem = (void *)malloc(result)))
        return (0);
    ft_bzero(emptymem,result);
    return (emptymem);
}
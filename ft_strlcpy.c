#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	size_t	count;
	size_t	i;

	count = 0;
	while (src[count] != '\0')
		++count;
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (count);
}

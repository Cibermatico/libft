#include <string.h>

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	size_t i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, s[i]);
		i++;
	}
}
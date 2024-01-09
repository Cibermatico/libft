#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	char *result;

	i = 0;
	if (!s || !f)
		return ;
	result = (char *)malloc(ft_strlen(s) + 1);
	
	if (result == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
char transform(unsigned int index, char c)
{
	return (c - 32);
}

int main(void)
{
	char *stringa = "ciao";
	char *result = ft_strmapi(stringa,transform);
	printf("%s", result);
	return 0;
}
*/
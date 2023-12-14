/*Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’. Each character of the string is 
initialized at ’\0’. If the allocation fails the function returns NULL.*/

#include <stdio.h>
#include <stdlib.h>

void ft_strclr(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}

char * ft_strnew(size_t size)
{
	char *stringa;
	stringa = (char *)malloc(size * sizeof(char));
	if (!stringa)
		return NULL;
	ft_strclr(stringa);
	return stringa;	
}

int main(void)
{
	char *stringa1;
	stringa1 = ft_strnew(10);
	printf("%s ",stringa1);
	//printf("%d", ft_strlen(stringa1));
	return 0;
}

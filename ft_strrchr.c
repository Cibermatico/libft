/*return a pointer to the last occurrence of character in str.
If the character is not found, the function returns a null pointer.*/

#include <stdio.h>

int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strrchr(const char *str, int c)
{        
    int len;

    len = ft_strlen(str);
    while (len >= 0)
    {
        if (str[len] == c)              
            return (unsigned char *)&str[len];
        else
            len--;
    }
    return NULL;
}

int main(void)
{
	char stringa1[] = "test delle occorrenze.";	
    char c = '.';

	printf("%s ",ft_strrchr(stringa1, c));
	return 0;
}
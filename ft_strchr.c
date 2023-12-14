/*This returns a pointer to the first occurrence of the character c in the 
string str, or NULL if the character is not found.*/

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{
        
    while (*str != '\0')
    {
        if (*str == c)
            return (unsigned char *)str;
        str++;
    }
    return NULL;
}
int main(void)
{
	char stringa1[] = "ciaooo";	
    char c = 'o';

	printf("%s ",ft_strchr(stringa1, c));
	return 0;
}
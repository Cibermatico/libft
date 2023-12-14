/*Lexicographical comparison between s1 and s2 up to n 
characters or until a ’\0’ is reached. If the 2 strings are identical,
the function returns 1, or 0 otherwise.*/

#include <stdio.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;
	
	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i <= n))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return 0;
	}
	return 1;
}

int main(void)
{
	char stringa1[] = "abc123";
	char stringa2[]	= "abc1237";
    int n = 7;

	printf("%d ",ft_strnequ(stringa1,stringa2, n));
	return 0;
}

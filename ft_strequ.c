/*Lexicographical comparison between s1 and s2. If the 2
strings are identical the function returns 1, or 0 otherwise*/

#include <stdio.h>

int ft_strequ(char const *s1, char const *s2)
{
	size_t i;
	
	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
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
	char stringa2[]	= "abc";

	printf("%d ",ft_strequ(stringa1,stringa2));
	return 0;
}



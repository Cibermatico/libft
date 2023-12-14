/*Sets every character of the string to the value ’\0’.*/

#include <stdio.h>
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

int main(void)
{
	char stringa1[] = "ab123";
	ft_strclr(stringa1);
	printf("%s ",stringa1);
	printf("%d", sizeof(stringa1));
	return 0;
}

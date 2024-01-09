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
char *ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	j;
	unsigned int	len_s1;
	unsigned int	len_s2;

	i = 0;	
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	j = len_s1;
	result = (char *)malloc(sizeof(char) * (len_s1 + len_s2) + 1);
	while (i <= len_s1)
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while (i <= len_s2)
		result[j++] = s2[i++];
	result[j] = '\0';
	return result;
}

/*int main(void)
{
	const char *stringa1 = "sto";
	const char *stringa2 = "cazzo";

	char *result = ft_strjoin(stringa1,stringa2);
	printf("%s", result);
	return 0;
	}*/
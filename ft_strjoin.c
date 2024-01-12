/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:27:21 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/12 08:39:42 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*result;
	size_t			i;
	size_t			j;
	unsigned int	len_s1;
	unsigned int	len_s2;

	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	j = len_s1;
	result = (char *)malloc(sizeof(char) * (len_s1 + len_s2) + 1);
	if (!result)
		return (NULL);
	while (i <= len_s1)
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while (i <= len_s2)
		result[j++] = s2[i++];
	result[j] = '\0';
	return (result);
}

/*int main(void)
{
	const char *stringa1 = "abc";
	const char *stringa2 = "1234";

	char *result = ft_strjoin(stringa1,stringa2);
	printf("%s", result);
	return 0;
	}*/
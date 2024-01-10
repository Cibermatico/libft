/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:25:29 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 19:25:29 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return ((unsigned char *)str);
		str++;
	}
	return (NULL);
}
/*int main(void)
{
	char stringa1[] = "ciaooo";	
	char c = 'o';

	printf("%s ",ft_strchr(stringa1, c));
	return 0;
}*/
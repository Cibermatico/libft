/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:28:43 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 19:28:44 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	z;
	size_t	find_size;

	i = 0;
	z = 0;
	find_size = 0;
	while (needle[find_size] != '\0')
		find_size++;
	if (find_size == 0)
		return (haystack);
    
while ((haystack[i] != '\0') && (i < len))
	{
		while (needle[z] == haystack[i + z])
		{
			if (z == find_size - 1)
				return (haystack + i);
			z++;
		}
		z = 0;
		i++;
	}
	return NULL;
}



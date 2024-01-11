/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:11:57 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/11 19:35:40 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	zero(unsigned int *a, unsigned int *b)
{
	*a = 0;
	*b = 0;	
}
size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	dst_size;
	unsigned int	src_size;
	unsigned int	result;

	zero(&dst_size, &src_size);
	if (!dest && size == 0)
		return (0);
	while (dest[dst_size] != '\0')
		++dst_size;	
	while (src[src_size] != '\0')
		++src_size;
	result = src_size;
	if (size <= dst_size)
		result += size;
	else
		result += dst_size;
	src_size = 0;
	while (src[src_size] != '\0' && dst_size + 1 < size)
	{
		dest[dst_size] = src[src_size];
		dst_size++;
		src_size++;
	}
	dest[dst_size] = '\0';
	return (result);
}

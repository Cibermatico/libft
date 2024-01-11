/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:11:17 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 17:17:57 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp_dest;
	unsigned char	*temp_src;
	unsigned char	*temp;

	i = 0;
	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	temp = malloc(n);
	if (n == 0)
		return (dest);
	while (i < n)
	{
		temp[i] = temp_src[i];
		temp_dest[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}

/*int main () 
{
   char dest[] = "old1string";
   const char src[]  = "news2tring";
   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);
   return(0);
}*/

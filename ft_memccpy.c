/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:22:00 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 19:22:00 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*temp;
	unsigned char	*temp1;

	i = 0;
	temp = (unsigned char *)dest;
	temp1 = (unsigned char *)src;
	if (n == 0)
		return (dest);
	while ((i < n) && (temp[i] != c))
	{
		temp[i] = temp1[i];
		i++;
		dest++;
	}
	if (i < n)
		return (dest);
	else
		return (NULL);
}

/*int main ()
{
   const char src[4] = {1,2,3,4};
   char dest[10] = {9,9,9,'7',9,9,9,9};
   char *out;
  
   for (int i = 0; i < 8; i++)
   		printf(" %d",dest[i]);
	puts("\n");
   out = ft_memccpy(dest, src, '7', 4*sizeof(char));
   puts("Dopo ft_memccpy:");
   for (int i = 0; i < 8; i++)
   		printf(" %d",dest[i]);      
	printf("\n%c",*out);

   return(0);
}*/

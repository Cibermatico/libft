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

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    int i;
	unsigned char *temp;
	unsigned char *temp1;
	
	i = 0;
	temp = (unsigned char *)dest; //cast per poterlo dereferenziare
	temp1 = (unsigned char *)src;
	if (n == 0) 
		return dest;	
    
	while ((i < n) && (temp[i] != c))
	{
		temp[i] = temp1[i];			 				
		i++;
        dest++;                     // = (void *)((char *)dest + 1);
	}    
	if (i < n)
        return dest; // restituisci il puntatore al carattere trovato in dest
    else
        return NULL;
}

int main () //funziona
{
   const char src[4] = {1,2,3,4};
   char dest[10] = {9,9,9,'7',9,9,9,9};
   char *out;
  
   for (int i = 0; i < 8; i++)
   		printf(" %d",dest[i]);
	puts("\n");
   out = ft_memccpy(dest, src, '7', 4*sizeof(char));   //ok, ricordarsi che sizeof(int) = 4
   puts("Dopo ft_memccpy:");
   for (int i = 0; i < 8; i++)
   		printf(" %d",dest[i]);      
    printf("\n%c",*out);

   return(0);
}
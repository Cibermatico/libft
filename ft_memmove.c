/*DESCRIPTION    
	   The memmove() function copies n bytes from memory area src to
	   memory area dest.  The memory areas may overlap: copying takes
	   place as though the bytes in src are first copied into a
	   temporary array that does not overlap src or dest, and the bytes
	   are then copied from the temporary array to dest.
RETURN VALUE 
	   The memmove() function returns a pointer to dest.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ft_bzero.c"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char *temp_dest;
	unsigned char *temp_src;
	unsigned char *temp;
	
	i = 0;
	temp_dest = (unsigned char *)dest; //cast per poterlo dereferenziare
	temp_src = (unsigned char *)src;
	temp = malloc(n);				
	//ft_bzero(temp,n);
	if (n == 0) 
		return dest;	
	while (i < n)
	{
		temp[i] = temp_src[i];	
		temp_dest[i] = temp[i];		
		i++;
	}
	free(temp);
	return dest;
}

int main () 
{
   char dest[] = "old1string";
   const char src[]  = "news2tring";
   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);
   return(0);
}
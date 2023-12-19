/*DESCRIPTION         top

	   The memcpy() function copies n bytes from memory area src to
	   memory area dest. The memory areas must not overlap. Use
	   memmove(3) if the memory areas do overlap. 
	   The memcpy() function returns a pointer to dest.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char *temp;
	unsigned char *temp1;
	
	i = 0;
	temp = (unsigned char *)dest; //cast per poterlo dereferenziare
	temp1 = (unsigned char *)src;
	if (n == 0) 
		return dest;	
	while (i < n)
	{
		temp[i] = temp1[i];			 				
		i++;
	}
	return dest;
}

int main () 
{
   const int src[4] = {1,2,3,4};
   int dest[10] = {9,9,9,9,9,9,9,9};
  
   for (int i = 0; i < 8; i++)
   		printf(" %d",dest[i]);
	puts("\n");
   ft_memcpy(dest, src, 4 *sizeof(int));   //ok, ricordarsi che sizeof(int) = 4
   puts("Dopo ft_memcpy:");
   for (int i = 0; i < 8; i++)
   		printf(" %d",dest[i]);
      
   return(0);
}


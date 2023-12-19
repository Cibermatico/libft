/*DESCRIPTION    
       The memccpy() function copies no more than n bytes from memory
       area src to memory area dest, stopping when the character c is
       found.
       If the memory areas overlap, the results are undefined.
RETURN VALUE 
       The memccpy() function returns a pointer to the next character in
       dest after c, or NULL if c was not found in the first n
       characters of src.
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
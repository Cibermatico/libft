/*DESCRIPTION 
	   The memset() function fills the first n bytes of the memory area
	   pointed to by ptr with the constant byte x.
RETURN VALUE
	   The memset() function returns a pointer to the memory area ptr.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>	   

void *ft_memset(void *ptr, int c, size_t n)
{
	int i;
	unsigned char *temp;
	
	i = 0;
	temp = (unsigned char *)ptr; //cast per poterlo dereferenziare
	if (ptr == NULL || n == 0) {
        return ptr;
    }
	while (i < n)
	{
		temp[i] = c;	/*poichè temp è una copia castata di ptr, se modifico i valori a cui punta posso
		 				ritornare anche ptr, che punterà anch'esso ai valori modificati*/
		i++;
	}
	return ptr;
}
void printArray(int arr[], int n) 
{ 
   for (int i=0; i<n; i++) 
      printf("%c ", arr[i]); 
} 

int main() 
{ 
    int b = 10; 
    int arr[b]; 
  
    
    ft_memset(arr, '.', b*sizeof(int)); 
    
    printArray(arr, b); 
  
    return 0; 
} 
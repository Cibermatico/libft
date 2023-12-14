/*The bzero() function erases the data in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes
       containing '\0') to that area.
RETURN: none*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void bzero(void *s, size_t n)
{
	int i;
	unsigned char *temp;
	
	i = 0;
	temp = (unsigned char *)s; //cast per poterlo dereferenziare
	
	while (i < n)
	{
		temp[i] = '\0';			 				
		i++;
	}
}

void printArray(int arr[], int n) 
{ 
   for (int i=0; i<n; i++) 
      printf("%d ", arr[i]); 
} 

int main() 
{ 
    int b = 10; 
    int arr[b]; 
      
    bzero(arr, b*sizeof(int)); 
    
    printArray(arr, b); 
  
    return 0; 
} 





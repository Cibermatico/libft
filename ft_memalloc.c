/*Allocates (with malloc(3)) and returns a “fresh” memory
area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL.

il cast (unsigned char *) è utilizzato per interpretare la memoria allocata come un array di byte non firmati
(unsigned char), consentendo l'accesso e la manipolazione dei singoli byte. 
Questo cast è comune quando si desidera manipolare direttamente la memoria byte per byte, 
come nel caso dell'inizializzazione a zero.*/

#include <stdlib.h>
#include <stdio.h>

void * ft_memalloc(size_t size)
{
	void *ptr;
	int i;
	unsigned char *temp;

	i = 0;
	ptr = malloc(size);
	if (!ptr)
		return NULL;
	temp = (unsigned char *)ptr;
	while (i < size)                       /*occhio alla dimensione dell'array! */
	{
		temp[i] = 0;
		i++;
	}
	return (ptr);
}

int main(void)
{
	int *array = ft_memalloc(10*sizeof(int));
	int i = 0;
	while (i < 10)
	{
		printf("%d", array[i]);
		i++;
	}	
	free(array);
	return 0;
}

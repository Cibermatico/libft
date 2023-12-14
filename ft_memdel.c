/*Takes as a parameter the address of a memory area that needs
to be freed with free(3), then puts the pointer to NULL.*/

#include <stdio.h>
#include <stdlib.h>

void ft_memdel(void **ap)
{
    free(*ap);
    *ap = NULL;
}

int main(void)
{
	int *array = (int *)malloc(5*sizeof(int));
	int i = 0;

    for (size_t i = 0; i < 5; i++)
    {
        array[i] = 1;
    }    	
    ft_memdel((void **)&array);  /* cast a void** */
	printf("\n %d ", (void*)array); //dopo la deallocazione l'array non c'è più e non ha senso cercare gli indici.
	return 0;
}

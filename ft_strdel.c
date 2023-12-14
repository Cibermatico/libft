/*Takes as a parameter the address of a string that need to be
freed with free(3), then sets its pointer to NULL*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ft_strdel(char **as)
{
    free(*as);
    *as = NULL;
}

int main(void)
{
	char *array = (char *)malloc(5*sizeof(char));
	int i = 0;
     
    strcpy(array,"ciao");
    ft_strdel(&array);  
	printf("\n %s ", array);
	return 0;
}

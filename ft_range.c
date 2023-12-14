#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *result;
	int dim;

	dim = max - min;
	result = (int*)malloc((dim) * sizeof(int));		

	dim = 0;
	while (min < max)
	{
		result[dim] = min;
		dim++;
		min++;		
	}
	return (result);
}


int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);  //l'array tab assume il valore del return della funzione
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
	
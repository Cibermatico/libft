/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:22:25 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 19:22:25 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}

/*int main(void)
{
	int *array = (int *)malloc(5*sizeof(int));
	int i = 0;

	for (size_t i = 0; i < 5; i++)
	{
		array[i] = 1;
	}    	
	ft_memdel((void **)&array); 
	printf("\n %d ", (void*)array) 
	return 0
	*/
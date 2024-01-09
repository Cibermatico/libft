/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:01:30 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 17:05:11 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*ptr;
	int				i;
	unsigned char	*temp;

	i = 0;
	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	temp = (unsigned char *)ptr;
	while (i < size)
	{
		temp[i] = 0;
		i++;
	}
	return (ptr);
}
/*
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
*/

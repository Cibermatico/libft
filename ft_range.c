/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:25:11 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 19:25:11 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_range(int min, int max)
{
	int	*result;
	int	dim;

	dim = max - min;
	result = (int *)malloc((dim) * sizeof(int));
	dim = 0;
	while (min < max)
	{
		result[dim] = min;
		dim++;
		min++;
	}
	return (result);
}
/*int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);  
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/	
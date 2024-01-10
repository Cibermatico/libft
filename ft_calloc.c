/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:34:23 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/10 18:20:41 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*output;
	unsigned int	total;

	total = count * size;
	output = malloc(total);
	if (!output)
		return (NULL);
	bzero(output, total);
	return (output);
}

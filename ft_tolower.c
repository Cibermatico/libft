/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:47:03 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 19:29:50 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isupper(unsigned char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}


int ft_tolower(int c)
{
	if (ft_islower(c))
		return (c + 32);
	else
		return (c); 
}

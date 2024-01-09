/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:20:47 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 19:20:48 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isascii(unsigned char c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}
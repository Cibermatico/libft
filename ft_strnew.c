/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:28:34 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 19:28:34 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*stringa;

	stringa = (char *)malloc(size * sizeof(char));
	if (!stringa)
		return (NULL);
	ft_strclr(stringa);
	return (stringa);
}

/*int main(void)
{
	char *stringa1;
	stringa1 = ft_strnew(10);
	printf("%s ",stringa1);
	//printf("%d", ft_strlen(stringa1));
	return 0;
}*/

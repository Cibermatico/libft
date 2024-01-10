/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:25:20 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 19:25:20 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	len;

	i = 0; 
	j = 0;
	len = ft_strlen(dest);

	while (src[i] !='\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	return (dest);
}

/*int main(void)  //contollare manuale e casi particolari
{
char destination[] = "cIao2"; 
char source[] = "cIao1";

printf("%s ", ft_strcat(destination,source)); 
return 0;    
}*/
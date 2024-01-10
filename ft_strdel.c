/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:26:08 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 19:26:08 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}

/*int main(void)
{
	char *array = (char *)malloc(5*sizeof(char));
	int i = 0;
	 
	strcpy(array,"ciao");
	ft_strdel(&array);  
	printf("\n %s ", array);
	return 0;
}*/

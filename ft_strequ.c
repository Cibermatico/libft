/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:26:54 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 19:26:54 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	size_t i;
	
	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return 0;
	}
	return 1;
}

int main(void)
{
	char stringa1[] = "abc123";
	char stringa2[]	= "abc";

	printf("%d ",ft_strequ(stringa1,stringa2));
	return 0;
}



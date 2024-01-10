/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:25:52 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 19:25:52 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}

/*int main(void)
{
	char stringa1[] = "ab123";
	ft_strclr(stringa1);
	printf("%s ",stringa1);
	printf("%d", sizeof(stringa1));
	return 0;
}*/

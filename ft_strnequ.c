/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:28:23 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 19:28:23 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i <= n))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (0);
	}
	return (1);
}

/*int main(void)
{
	char stringa1[] = "abc123";
	char stringa2[]	= "abc1237";
    int n = 7;

	printf("%d ",ft_strnequ(stringa1,stringa2, n));
	return 0;
}*/

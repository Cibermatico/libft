/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:23:13 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 19:23:13 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void ft_putendl(char const *s)
{
  size_t i;

  i = 0;
    while (s[i] != '\0')
    {
        write(1,&s[i],1);
        i++;
    }
    write(1,"\n",1);
}

int main(void)
{
    ft_putendl("ciaoo");
    return 0;
}
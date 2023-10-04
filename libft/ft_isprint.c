/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:51:00 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/04 15:29:15 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
#include "libft.h"
#include <stdio.h>

int main()
{
    char c;

    c = 'A';
    if (ft_isprint(c))
        printf("%c es un carácter imprimible.\n", c);
    else
        printf("%c no es un carácter imprimible.\n", c);

    c = 31;
    if (ft_isprint(c))
        printf("%c es un carácter imprimible.\n", c);
    else
        printf("%c no es un carácter imprimible.\n", c);

    return 0;
}
*/

/*
** Función: ft_isprint
** ---------------------
** Verifica si el carácter pasado es un carácter imprimible.
**
** c: el carácter a verificar.
**
** Devuelve: 1 si el carácter es un carácter imprimible, 
y 0 en caso contrario.
*/

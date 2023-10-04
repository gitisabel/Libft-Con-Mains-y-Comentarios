/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:40:18 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/03 11:45:16 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
    if (ft_isalpha(c))
        printf("%c es un carácter alfabético.\n", c);
    else
        printf("%c no es un carácter alfabético.\n", c);

    c = '1';
    if (ft_isalpha(c))
        printf("%c es un carácter alfabético.\n", c);
    else
        printf("%c no es un carácter alfabético.\n", c);

    return 0;
}
*/

/*
** Función: ft_isalpha
** ---------------------
** Verifica si el carácter pasado es un carácter alfabético.
**
** c: el carácter a verificar.
**
** Devuelve: 1 si el carácter es un carácter alfabético, 0 en caso contrario.
*/

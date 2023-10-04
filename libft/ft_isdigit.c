/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:01:51 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/04 15:26:03 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
** Función: ft_isdigit
** ---------------------
** Verifica si el carácter pasado es un dígito numérico.
**
** c: el carácter a verificar.
**
** Devuelve: 1 si el carácter es un dígito numérico, 
y 0 en caso contrario.
*/

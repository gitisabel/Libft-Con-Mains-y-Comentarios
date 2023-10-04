/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:06:30 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/04 13:59:51 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
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
    if (ft_isalnum(c))
        printf("%c es un carácter alfanumérico.\n", c);
    else
        printf("%c no es un carácter alfanumérico.\n", c);

    c = '1';
    if (ft_isalnum(c))
        printf("%c es un carácter alfanumérico.\n", c);
    else
        printf("%c no es un carácter alfanumérico.\n", c);

    c = '#';
    if (ft_isalnum(c))
        printf("%c es un carácter alfanumérico.\n", c);
    else
        printf("%c no es un carácter alfanumérico.\n", c);

    return 0;
}
*/

/*
 Comentarios
 * --------------------
 * Comprueba si el carácter dado es alfanumérico.
 * c: el carácter a comprobar.
 * Retorna: 1 si el carácter es alfanumérico (letra o número), 
 * y retorna 0 en caso contrario.
 * La función ft_isalnum comprueba si el carácter es una 
 letra (mayúscula o minúscula) o un número.
 * Si es así, la función retorna 1. Si no, retorna 0.
 * Esta función es útil para validar la entrada del usuario 
 o para procesar texto.
 */

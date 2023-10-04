/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:25:04 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/04 13:39:32 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

/*
#include "libft.h"
#include <stdio.h>

int main()
{
    char str[50] = "Hola Mundo!";
    printf("Antes de ft_bzero: %s\n", str);

    ft_bzero(str, 5);
    printf("Después de ft_bzero: %s\n", str);

    return 0;
}
*/

/*
 * La función ft_bzero se utiliza para poner a cero (inicializar a 0) 
 una secuencia de bytes en la memoria.
 * La función toma dos argumentos: 
 un puntero a la secuencia de bytes y el número de bytes a poner a cero.
 * En el código, primero se inicializa una variable de índice 'i' a 0. 
 Luego, mientras 'i' sea menor que 'n' (el número de bytes a poner a cero),
 se pone a cero el byte en la posición 'i' de la secuencia y se incrementa 'i'.
 *En el ejemplo del main, se tiene una cadena de caracteres 'str' 
 que se inicializa con "Hola Mundo!". 
 Luego, se utiliza ft_bzero para poner a cero los primeros 5 caracteres de 'str'.
 * Como resultado, los primeros 5 caracteres de 'str' se convierten 
 en caracteres nulos y la impresión de 'str' después 
 de ft_bzero muestra una cadena vacía.
 */
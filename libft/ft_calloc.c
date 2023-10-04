/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:19:07 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/04 13:54:33 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	n_bytes;

	if (!nmemb || !size)
		return (malloc(0));
	n_bytes = nmemb * size;
	if (n_bytes / nmemb != size)
		return (NULL);
	ptr = malloc(n_bytes);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n_bytes);
	return (ptr);
}

/*
#include "libft.h"
#include <stdio.h>

int main()
{
    size_t nmemb = 10;
    size_t size = sizeof(int);
    int *array = (int*)ft_calloc(nmemb, size);
    if (!array)
    {
        printf("La asignación de memoria falló.\n");
        return 1;
    }

    // Usa el array
    for (size_t i = 0; i < nmemb; i++)
    {
        array[i] = i;
        printf("%d ", array[i]);
    }

    // Libera la memoria
    free(array);

    return 0;
}
*/

/*
 * La función ft_calloc se utiliza para asignar memoria 
 para un array de nmemb elementos, cada uno de tamaño size bytes, 
 y devuelve un puntero a la memoria asignada. 
 La memoria asignada está inicializada a cero.
 * En el código, primero se verifica si nmemb o size son cero. 
 Si es así, se asigna memoria de tamaño 0 y se devuelve un puntero a ella.
 * Luego, se calcula el número total de bytes necesarios (n_bytes) 
 multiplicando nmemb por size.
 * Si n_bytes dividido por nmemb no es igual a size, 
 se devuelve NULL para evitar un desbordamiento de tamaño.
 * Luego, se asigna memoria de tamaño n_bytes y 
 se devuelve un puntero a ella (ptr).
 * Si la asignación de memoria falla, se devuelve NULL.
 * Finalmente, se inicializa la memoria asignada a cero utilizando 
 * la función ft_bzero y se devuelve el puntero a la memoria.
 * En el ejemplo del main, se utiliza ft_calloc 
 para asignar memoria para un array de 10 enteros.
 * Luego, se utiliza el array para almacenar los números 
 del 0 al 9 y se imprime cada número.
 * Finalmente, se libera la memoria asignada.
 */
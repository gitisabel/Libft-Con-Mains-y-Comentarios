/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:07:36 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/03 18:21:32 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
/*
#include "libft.h"
#include <stdio.h>

int main()
{
    char src[] = "¡Hola, Mundo!";
    char dst[50];
    size_t size = sizeof(dst);
    size_t src_len;

    src_len = ft_strlcpy(dst, src, size);

    printf("Longitud de la fuente: %zu\n", src_len);
    printf("Cadena de destino: %s\n", dst);

    return 0;
}
*/

// 1. Incluye "libft.h" para ft_strlcpy y "stdio.h" para printf.
// 2. Definimos la función principal.
// 3. Definimos la cadena de origen.
// 4. Definimos la cadena de destino. Usamos un array de tamaño 50.
// 5. Definimos la variable size. 
// Se establece al tamaño de la cadena de destino.
// 6. Definimos la variable src_len.
// 7. Se llama a la función ft_strlcpy con la cadena de destino, la cadena 
//de origen y el tamaño como argumentos. La función devuelve la longitud 
// de la cadena de origen, que se almacena en src_len.
// 8. Imprimimos la longitud de la cadena de origen.
// 9. Imprimimos la cadena de destino.
// 10. Retornamos 0 para indicar que el programa se ejecutó correctamente.
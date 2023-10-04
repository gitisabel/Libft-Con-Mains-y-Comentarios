/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:15:10 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/03 17:18:07 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	u1;
	unsigned char	u2;

	while (n > 0)
	{
		u1 = (unsigned char) *s1;
		u2 = (unsigned char) *s2;
		s1++;
		s2++;
		if (u1 != u2)
			return (u1 - u2);
		if (u1 == '\0')
			return (0);
		n--;
	}
	return (0);
}
/*
#include "libft.h"
#include <stdio.h>

int main() {
    const char *cadena1 = "Hola Mundo";
    const char *cadena2 = "Hola Mundo";
    size_t n = 10;

    int resultado = ft_strncmp(cadena1, cadena2, n);

    if (resultado < 0) {
        printf("La cadena1 es menor que la cadena2\n");
    } else if (resultado > 0) {
        printf("La cadena1 es mayor que la cadena2\n");
    } else {
        printf("Las cadenas son iguales\n");
    }

    return 0;
}
*/
//Este programa compara los primeros n caracteres de cadena1 y cadena2 
//usando la función ft_strncmp. 
//Luego imprime un mensaje dependiendo del resultado de la comparación.
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:32:44 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/03 16:37:35 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*last_occ;

	len = ft_strlen(s);
	last_occ = (char *)(s + len);
	while (*last_occ != (unsigned char)c && len)
	{
		last_occ--;
		len--;
	}
	if (*last_occ == (unsigned char)c)
		return (last_occ);
	return (0);
}
/*
#include "libft.h"
#include <stdio.h>

int main()
{
    const char *cadena = "Hola, mundo!";
    int caracter = 'o';
    char *resultado;

    resultado = ft_strrchr(cadena, caracter);
    if (resultado)
        printf("El último '%c' en la cadena '%s' está en la posición: 
        %ld\n", caracter, cadena, resultado - cadena);
    else
        printf("El caracter '%c' no se encontró en la cadena '%s'\n", 
        caracter, cadena);

    return 0;
}
*/
//Este programa busca el último 'o' en la cadena "Hola, mundo!" 
//y muestra su posición. 
//Si el caracter no se encuentra en la cadena, 
//se muestra un mensaje indicándolo.
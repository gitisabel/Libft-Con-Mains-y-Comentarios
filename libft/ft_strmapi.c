/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:54:03 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/04 12:14:50 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int unsigned	i;
	char			*new_str;

	i = 0;
	new_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
#include "libft.h"
#include <stdio.h>

char mi_funcion(unsigned int i, char c)
{
    return c + i;
}

int main()
{
    char const *s = "Hola, Mundo!";
    char *resultado = ft_strmapi(s, mi_funcion);

    if (resultado)
    {
        printf("%s\n", resultado);
        free(resultado);
    }
    else
    {
        printf("Fallo en la asignación de memoria\n");
    }

    return 0;
}
*/

/*
es una función que toma un índice y un carácter, 
y devuelve el carácter incrementado por el índice. 
Esta función se pasa a ft_strmapi como el segundo argumento. 
La cadena "Hola, Mundo!" se pasa como el primer argumento. 
El resultado se imprime y luego se libera.
*/
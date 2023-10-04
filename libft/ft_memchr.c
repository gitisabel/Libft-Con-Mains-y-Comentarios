/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:35:06 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/04 12:38:32 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
/*
#include "libft.h"
#include <stdio.h>

int main()
{
    char cadena[] = "Hola Mundo!";
    char c = 'M';
    char *resultado;

    resultado = (char *)ft_memchr(cadena, c, sizeof(cadena));

    if (resultado != NULL)
    {
        printf("El caracter '%c' está en la posición: 
        %ld\n", c, resultado - cadena);
    }
    else
    {
        printf("El caracter '%c' no se está en la cadena.\n", c);
    }

    return 0;
}
*/
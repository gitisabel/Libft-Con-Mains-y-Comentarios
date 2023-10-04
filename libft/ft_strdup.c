/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:28:54 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/04 12:30:35 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s) + 1);
	if ((!s) || (!s2))
		return (NULL);
	ft_memcpy(s2, s, ft_strlen(s) + 1);
	return (s2);
}
/*
#include "libft.h"
#include <stdio.h>

int main() {
    char *original = "Hola, mundo!";
    char *copia;

    copia = ft_strdup(original);
    if (copia == NULL) {
        printf("Error al duplicar la cadena.\n");
        return 1;
    }

    printf("Cadena original: %s\n", original);
    printf("Cadena duplicada: %s\n", copia);

    free(copia); // Libera la memoria reservada con malloc

    return 0;
}
*/
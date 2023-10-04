/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:34:23 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/03 17:37:35 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (0);
	i = 0;
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] != '\0' && i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
/*
#include "libft.h"
#include <stdio.h>

int main() {
    const char *big = "Hola, mundo!";
    const char *little = "mundo";
    size_t len = 12; // longitud de la cadena 'big'

    char *resultado = ft_strnstr(big, little, len);

    if (resultado) {
        printf("Se encontró '%s' en '%s'\n", little, big);
    } else {
        printf("No se encontró '%s' en '%s'\n", little, big);
    }

    return 0;
}
*/
//busca la cadena little ("mundo") dentro de la cadena big ("Hola, mundo!"). 
//Si la encuentra, imprime un mensaje indicando que la encontró; 
//de lo contrario, imprime un mensaje indicando que no la encontró.
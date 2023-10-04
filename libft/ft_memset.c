/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:32:16 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/04 12:33:32 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include "libft.h"
#include <stdio.h>

int main() {
    char cadena[50] = "Hola Mundo!";
    printf("Antes de ft_memset: %s\n", cadena);
    ft_memset(cadena, '*', 5);
    printf("Después de ft_memset: %s\n", cadena);
    return 0;
}
*/
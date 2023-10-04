/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:55:16 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/03 16:30:25 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (unsigned char)c)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (0);
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hola, Mundo!";
    char c = 'o';
    char *resultado = ft_strchr(str, c);

    if (resultado)
        printf("Carácter '%c' está en posición: %ld\n", c, resultado - str);
    else
        printf("Carácter '%c' no está\n", c);

    return 0;
}
*/
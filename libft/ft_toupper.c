/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:29:19 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/03 15:32:31 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include "libft.h"
#include <stdio.h>

int main() {
    char c = 'a';
    printf("Original character: %c\n", c);
    printf("Converted character: %c\n", ft_toupper(c));
    return 0;
}
*/
//declaramos una variable c y le asignamos el carácter 'a'. 
//Luego, imprimimos el carácter original y el carácter convertido
//utilizando la función ft_toupper. 
// Ejecutando el programa, el carácter 'a' se convierte en 'A'.
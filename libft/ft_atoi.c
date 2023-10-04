/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:16:48 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/04 13:47:21 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i] == '-');
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = 10 * result + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*
#include "libft.h"
#include <stdio.h>

int main()
{
    char *cadena = "12345";
    int numero = ft_atoi(cadena);

    printf("El número es: %d\n", numero);

    return 0;
}
*/

/*
 * La función ft_atoi convierte una cadena de caracteres 
 en un número entero (int).
 * Ignora los espacios en blanco y los 
 caracteres de control al inicio de la cadena,
 y acepta un signo opcional (+ o -) antes del número.
 * Los dígitos de la cadena se convierten en un número entero,
 * que se devuelve al final. Si la cadena comienza con un signo,
 * este se tiene en cuenta para el resultado final.
 * Esta función es útil para convertir cadenas de texto 
 * que representan números en sus equivalentes numéricos.
 */
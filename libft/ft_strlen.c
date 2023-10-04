/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:41:48 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/03 15:44:19 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
#include "libft.h"
#include <stdio.h>

int main() {
    const char *s = "Hola Mundo";
    size_t len = ft_strlen(s);
    printf("La longitud de '%s' es %zu\n", s, len);
    return 0;
}
*/
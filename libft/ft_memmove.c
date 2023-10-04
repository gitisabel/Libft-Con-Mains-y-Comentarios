/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:58:12 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/04 13:00:09 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
		return (ft_memcpy (dest, src, n));
	while (n--)
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}
/*
#include "libft.h"
#include <stdio.h>

int main() {
    char dest[50] = "Hola, mundo!";
    char src[50] = "¡Bienvenid@ a la programación en C!";

    printf("Antes de memmove dest = %s, src = %s\n", dest, src);
    ft_memmove(dest, src, strlen(src)+1);
    printf("Después de memmove dest = %s, src = %s\n", dest, src);

    return 0;
}
*/
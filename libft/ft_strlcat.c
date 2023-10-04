/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:04:49 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/04 12:06:53 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (size > dst_len + 1)
	{
		while (src[i] && (dst_len + 1 + i) < size)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	dst[dst_len + i] = '\0';
	if (size < dst_len)
		return (size + src_len);
	else
		return (dst_len + src_len);
}
/*
#include "libft.h"
#include <stdio.h>

int main()
{
    char destino[50] = "Hola, ";
    char fuente[] = "mundo!";
    size_t tamano = sizeof(destino);

    ft_strlcat(destino, fuente, tamano);

    printf("%s\n", destino);

    return 0;
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:34:14 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/03 13:38:22 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include "libft.h"
#include <stdio.h>

int main()
{
    char c;

    c = 'A';
    if (ft_isascii(c))
        printf("%c es un carácter ASCII.\n", c);
    else
        printf("%c no es un carácter ASCII.\n", c);

    c = 128;
    if (ft_isascii(c))
        printf("%c es un carácter ASCII.\n", c);
    else
        printf("%c no es un carácter ASCII.\n", c);

    return 0;
}
*/
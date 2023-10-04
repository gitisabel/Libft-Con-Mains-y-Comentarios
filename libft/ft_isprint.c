/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:51:00 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/03 13:53:40 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
    if (ft_isprint(c))
        printf("%c es un carácter imprimible.\n", c);
    else
        printf("%c no es un carácter imprimible.\n", c);

    c = 31;
    if (ft_isprint(c))
        printf("%c es un carácter imprimible.\n", c);
    else
        printf("%c no es un carácter imprimible.\n", c);

    return 0;
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:01:51 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/03 13:04:38 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
    if (ft_isalpha(c))
        printf("%c es un carácter alfabético.\n", c);
    else
        printf("%c no es un carácter alfabético.\n", c);

    c = '1';
    if (ft_isalpha(c))
        printf("%c es un carácter alfabético.\n", c);
    else
        printf("%c no es un carácter alfabético.\n", c);

    return 0;
}
*/
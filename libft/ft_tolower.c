/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:09:13 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/03 14:11:30 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include "libft.h"
#include <stdio.h>

int main()
{
    char c;

    c = 'A';
    printf("%c convertido a minúsculas es %c.\n", c, ft_tolower(c));

    c = 'a';
    printf("%c convertido a minúsculas es %c.\n", c, ft_tolower(c));

    return 0;
}
*/
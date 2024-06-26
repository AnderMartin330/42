/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:18:01 by andemart          #+#    #+#             */
/*   Updated: 2024/06/26 14:57:18 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	i;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		b++;
	}
	if (size <= a)
		return (size + b);
	i = 0;
	while (src[i] != '\0' && (a + i) < size - 1)
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	return (a + b);
}

/*int main() {
    char dest[20] = "Hello, ";
    char src[] = "World!";
    unsigned int size = sizeof(dest);

    unsigned int result = ft_strlcat(dest, src, size);

    printf("Cadena concatenada: %s\n", dest);
    printf("Longitud total de la cadena que se intentó crear: %u\n", result);

    return (0);
}*/
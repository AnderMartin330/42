/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:22:08 by andemart          #+#    #+#             */
/*   Updated: 2024/06/20 16:44:05 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	return (src_len);
}

/*int main(void) {
	char src[] = "Hello, World!";
	char dest[10];  // buffer destino con espacio para 9 caracteres + '\0'

	unsigned int len = ft_strlcpy(dest, src, sizeof(dest));

	printf("Original string: %s\n", src);
	printf("Copied string: %s\n", dest);
	printf("Length of original string: %u\n", len);

	return 0;
}*/

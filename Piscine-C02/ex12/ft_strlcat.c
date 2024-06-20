/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:23:26 by andemart          #+#    #+#             */
/*   Updated: 2024/06/20 16:44:34 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcat(char *dest, const char *src, unsigned int size) {
	unsigned int dest_len = 0;
	unsigned int src_len = 0;
	unsigned int i;

	// Encuentra la longitud de dest
	while (dest[dest_len] != '\0' && dest_len < size) {
		dest_len++;
	}

	// Encuentra la longitud de src
	while (src[src_len] != '\0') {
		src_len++;
	}

	// Si size es menor o igual que dest_len, no hay suficiente espacio para concatenar
	if (size <= dest_len) {
		return size + src_len;
	}

	// Copia src al final de dest
	i = 0;
	while (src[i] != '\0' && (dest_len + i) < (size - 1)) {
		dest[dest_len + i] = src[i];
		i++;
	}

	// Añade el terminador nulo
	dest[dest_len + i] = '\0';

	return dest_len + src_len;
}

/*int main() {
	char dest[20] = "Hola, ";
	const char *src = "mundo!";
	unsigned int size = sizeof(dest);

	unsigned int result = ft_strlcat(dest, src, size);

	printf("Cadena resultante: %s\n", dest);
	printf("Longitud total requerida: %u\n", result);

	return 0;
}*/
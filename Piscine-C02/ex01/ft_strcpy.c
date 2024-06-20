/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:09:04 by andemart          #+#    #+#             */
/*   Updated: 2024/06/20 16:43:19 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i] != '\0' && n > i)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void){
    char origen[] = "Hola, Mundo!";
    char destino[20];

    printf("Origen: %s\n", origen);

    ft_strcpy(destino, origen, 6);

    printf("Destino: %s\n", destino);
}*/

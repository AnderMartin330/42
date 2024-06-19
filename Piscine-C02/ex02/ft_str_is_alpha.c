/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:29:27 by andemart          #+#    #+#             */
/*   Updated: 2024/06/19 16:02:44 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main(void) {
    char cadena1[] = "HolaMundo";
    char cadena2[] = "Hola Mundo!";

    printf("Cadena1: %s -> %d\n", cadena1, ft_str_is_alpha(cadena1));
    printf("Cadena2: %s -> %d\n", cadena2, ft_str_is_alpha(cadena2));

    return 0;
}*/

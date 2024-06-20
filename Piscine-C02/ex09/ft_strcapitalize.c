/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:47:04 by andemart          #+#    #+#             */
/*   Updated: 2024/06/20 17:35:37 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_conditions(char *ptr)
{
	int	fl;

	fl = 1;
	if (fl)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr = *ptr - ('a' - 'A');
		fl = 0;
	}
	else
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
			*ptr = *ptr + ('a' - 'A');
	}
	if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n')
	{
		if (*ptr == ',' || *ptr == '.')
			fl = 1;
	}
	return (fl);
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		ft_conditions(ptr);
		ptr++;
	}
	return (str);
}

/*int main(void) {
    char str[] = "hola, mundo! ¿como estas?"; // Ejemplo más complejo
    char* capitalized_str = ft_strcapitalize(str);
    printf("%s\n", capitalized_str);  // Imprime "Hola, Mundo! ¿Como Estas?"
    return 0;
}*/

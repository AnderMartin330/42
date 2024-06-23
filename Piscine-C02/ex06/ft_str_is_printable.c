/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:19:34 by andemart          #+#    #+#             */
/*   Updated: 2024/06/20 16:43:26 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main() {
	char str1[] = "Hola, mundo!";
	char str2[] = "Hola, \x01mundo!";
	char str3[] = "Hola, \t mundo!";
	char str4[] = "Hola, \n mundo!";

	printf("str1: %d\n", ft_str_is_printable(str1));
	printf("str2: %d\n", ft_str_is_printable(str2));
	printf("str3: %d\n", ft_str_is_printable(str3));
	printf("str4: %d\n", ft_str_is_printable(str4));

	return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:49:56 by andemart          #+#    #+#             */
/*   Updated: 2024/06/20 16:43:28 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	*ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = *ptr + ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}

/*int main() {
	char str[] = "Hola, Mundo!";
	char* lower_str = ft_strlowcase(str);
	printf("%s\n", lower_str);  // Imprime "hola, mundo!"
	return 0;
}*/

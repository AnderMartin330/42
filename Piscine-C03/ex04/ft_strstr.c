/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:15:56 by andemart          #+#    #+#             */
/*   Updated: 2024/06/26 14:56:55 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*beginning;
	char	*pattern;

	if (*to_find == '\0')
	{
		return ((char *)str);
	}
	while (*str != '\0')
	{
		beginning = str;
		pattern = to_find;
		while (*beginning != '\0' && *pattern != '\0' && *beginning == *pattern)
		{
			beginning++;
			pattern++;
		}
		if (*pattern == '\0')
		{
			return ((char *)str);
		}
		str++;
	}
	return (0);
}

/*int 	main(void) 
{
    char str[] = "Hello, World!";
    char to_find[] = "o";
    char *result = ft_strstr(str, to_find);

    if (result != 0) {
        printf("La subcadena se encontró: %s\n", result);
    } else {
        printf("La subcadena no se encontró.\n");
    }

    return 0;
}*/

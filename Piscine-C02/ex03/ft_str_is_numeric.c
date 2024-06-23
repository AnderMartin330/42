/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:55:18 by andemart          #+#    #+#             */
/*   Updated: 2024/06/23 14:22:27 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(const char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main()
{
    char str1[] = "ABCDEF";
    char str2[] = "ABCDEF123";
    char str3[] = "abcdef";

    printf("String 1: %s - Result: %d\n", str1, ft_str_is_uppercase(str1));
    printf("String 2: %s - Result: %d\n", str2, ft_str_is_uppercase(str2));
    printf("String 3: %s - Result: %d\n", str3, ft_str_is_uppercase(str3));

    return 0;
}*/
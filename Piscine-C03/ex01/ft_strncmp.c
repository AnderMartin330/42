/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:42:56 by andemart          #+#    #+#             */
/*   Updated: 2024/06/26 14:54:34 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	if (n == 0)
	{
		return 0;
	}
	while ((s1[a] == s2[a] && (s1[a] != '\0' && s2[a] != '\0')) && (a < n - 1))
	{
		a++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (s1[a] - s2[a]);
	}
}

/*int	main(void)
{
	char	s1[] = "aaa";
	char	s2[] = "aaa";
	char	retorno;

	retorno = ft_strncmp(s1, s2, 5);
	printf("%d\n", retorno);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:36:16 by andemart          #+#    #+#             */
/*   Updated: 2024/06/25 14:46:42 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if (s1[i] != '\0')
		return (1);
	if (s2[i] != '\0')
		return (-1);
	return (0);
}

/*int	main(void)
{
	char	s1[] = "Hello WorA";
	char	s2[] = "Hello Wora";
	char	retorno;

	retorno = ft_strcmp(s1, s2);
	printf("%d\n", retorno);
}*/

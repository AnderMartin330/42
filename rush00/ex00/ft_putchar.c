/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 11:13:03 by andemart          #+#    #+#             */
/*   Updated: 2024/06/08 11:39:58 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int row, int col, int width, int height)
{
	if ((row == 0 && col == 0) || (row == height - 1 && col == width - 1))
	{
		write(1, "A", 1);
	}
	else if ((col == 0 && row == height - 1) || (row == 0 && col == width - 1))
	{
		write(1, "C", 1);
	}
	else if ((row != 0 && col != 0) && (row != height - 1 && col != width - 1))
	{
		write(1, " ", 1);
	}
	else
	{
		write(1, "B", 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   Bheight: andemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 11:17:25 bheight andemart          #+#    #+#             */
/*   Updated: 2024/06/08 13:07:52 bheight andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int row, int col, int width, int height);

void	rush(int width, int height)
{
	int	row;
	int	col;

	row = 0;
	while (row < height)
	{
		col = 0;
		while (col < width)
		{
			ft_putchar(row, col, width, height);
			col++;
		}
		row++;
		write(1, "\n", 1);
	}
}

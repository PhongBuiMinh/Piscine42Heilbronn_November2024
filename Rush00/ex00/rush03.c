/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:26:47 by majkijew          #+#    #+#             */
/*   Updated: 2024/11/17 16:26:49 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// print character (prototype)
void	ft_putchar(char c);

// draw A B C (prototype)
void	drawsection1(int columncount, int y);

// draw B Space B (prototype)
void	drawsection2(int columncount, int y);

// draw dynamic rectangle
void	rush(int y, int x)
{
	int	columncount;
	int	rowcount;

	if (y <= 0 || x <= 0)
	{
		ft_putchar('\n');
		return ;
	}
	columncount = 1;
	rowcount = 1;
	while (rowcount <= x)
	{
		if (rowcount == 1 || rowcount == x)
		{
			drawsection1(columncount, y);
		}
		else if (rowcount > 1 && rowcount < x)
		{
			drawsection2(columncount, y);
		}
		ft_putchar('\n');
		rowcount++;
	}
}

void	drawsection1(int columncount, int y)
{
	ft_putchar('A');
	while (columncount < y - 1)
	{
		ft_putchar('B');
		columncount++;
	}
	if (y != 1)
	{
		ft_putchar('C');
	}
}

void	drawsection2(int columncount, int y)
{
	ft_putchar('B');
	while (columncount < y - 1)
	{
		ft_putchar(' ');
		columncount++;
	}
	if (y != 1)
	{
		ft_putchar('B');
	}
}

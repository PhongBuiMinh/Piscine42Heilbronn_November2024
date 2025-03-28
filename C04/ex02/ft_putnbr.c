/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:57:19 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/02 22:27:02 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	converted_nb;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	converted_nb = (nb % 10) + 48;
	write(1, &converted_nb, 1);
	return ;
}

/* int	main(void)
{
	int	n;

	n = 0;
	ft_putnbr(n);
	return (0);
} */

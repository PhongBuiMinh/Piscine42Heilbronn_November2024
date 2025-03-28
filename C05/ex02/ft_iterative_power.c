/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:07:34 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/03 15:13:53 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	total;
	int	i;

	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	total = nb;
	i = 1;
	while (i < power)
	{
		total = total * nb;
		i++;
	}
	return (total);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_iterative_power(3, 0));
	return (0);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:01:26 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/03 15:14:10 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	total;

	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	total = nb * ft_recursive_power(nb, power - 1);
	return (total);
}

/* int	main(void)
{
	printf("%i\n", ft_recursive_power(3, 0));
	return (0);
}
 */
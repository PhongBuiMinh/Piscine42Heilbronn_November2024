/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:37:06 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/03 15:13:35 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	newnb;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	newnb = ft_recursive_factorial(nb - 1);
	return (nb * newnb);
}

/* int	main(void)
{
	printf("%i", ft_recursive_factorial(5));
	return (0);
} */

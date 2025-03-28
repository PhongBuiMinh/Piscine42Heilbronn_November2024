/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:49:06 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/03 15:13:17 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	count;

	count = 1;
	factorial = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	while (count <= nb)
	{
		factorial = factorial * count;
		count++;
	}
	return (factorial);
}

/*  #include <stdio.h>

int	main(void)
{
	int	n;
	int	factorial;

	n = 1;
	factorial = ft_iterative_factorial(n);
	printf("%d", factorial);
	return (0);
} */

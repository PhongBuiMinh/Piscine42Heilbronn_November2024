/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:57:36 by fbui-min          #+#    #+#             */
/*   Updated: 2024/11/27 11:56:09 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	return ;
}

/* #include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("BEFORE - a:%i b:%i\n", a, b);
	ft_swap(&a, &b);
	printf("AFTER - a:%i b:%i", a, b);
	return (0);
} */

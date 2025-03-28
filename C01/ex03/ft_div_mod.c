/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:47:02 by fbui-min          #+#    #+#             */
/*   Updated: 2024/11/27 11:56:23 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
		return ;
	*div = a / b;
	*mod = a % b;
	return ;
}

/* #include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 0;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("a: %i, b: %i, div: %i, mod: %i\n", a, b, div, mod);
	return (0);
} */

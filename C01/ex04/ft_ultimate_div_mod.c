/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:08:53 by fbui-min          #+#    #+#             */
/*   Updated: 2024/11/27 11:56:31 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	clonea;
	int	cloneb;

	clonea = *a;
	cloneb = *b;
	if (*b == 0)
		return ;
	*a = *a / cloneb;
	*b = clonea % *b;
	return ;
}

/* #include <stdio.h>

int	main(void)
{
	int	div;
	int	mod;

	div = 10;
	mod = 10;
	ft_ultimate_div_mod(&mod, &div);
	printf("div: %i, mod: %i \n", mod, div);
	return (0);
} */

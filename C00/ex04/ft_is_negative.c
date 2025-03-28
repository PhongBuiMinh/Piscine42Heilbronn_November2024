/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:41:19 by fbui-min          #+#    #+#             */
/*   Updated: 2024/11/18 12:05:01 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
	return ;
}

/* int	main(void)
{
	ft_is_negative(0);
	ft_is_negative(-5);
	ft_is_negative(5);
	return (0);
} */

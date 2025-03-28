/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:57:52 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/02 22:27:17 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	unsigned int	i;
	int				nb;
	int				sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == ' '
		|| str[i] == '\r' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (nb * sign);
}

/* int	main(void)
{
	printf("%i", ft_atoi(" ---+--+1234ab567"));
	return (0);
} */

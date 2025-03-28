/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:56:33 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/02 21:21:01 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 48 || str[count] > 57)
			return (0);
		count++;
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	char	*str;
	int		n;

	str = "0";
	n = ft_str_is_numeric(str);
	printf("%i", n);
	return (0);
} */

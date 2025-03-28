/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:25:53 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/02 21:21:34 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 65 || str[count] > 90)
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

	str = "A";
	n = ft_str_is_uppercase(str);
	printf("%i", n);
	return (0);
} */

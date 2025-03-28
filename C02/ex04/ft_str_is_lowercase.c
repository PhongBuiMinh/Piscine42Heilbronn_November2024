/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:21:45 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/02 21:21:15 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 97 || str[count] > 122)
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

	str = "a";
	n = ft_str_is_lowercase(str);
	printf("%i", n);
	return (0);
} */

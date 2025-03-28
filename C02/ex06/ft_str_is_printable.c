/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:28:14 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/02 21:21:51 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 32 || str[count] > 126)
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
	n = ft_str_is_printable(str);
	printf("%i", n);
	return (0);
} */

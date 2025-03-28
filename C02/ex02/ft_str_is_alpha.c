/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:58:17 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/02 21:20:45 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 65 || str[count] > 122 || (str[count] > 90
				&& str[count] < 97))
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

	str = "asgdfhd";
	n = ft_str_is_alpha(str);
	printf("%i", n);
	return (0);
} */

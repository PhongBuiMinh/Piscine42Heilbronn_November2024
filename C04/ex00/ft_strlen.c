/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:36:22 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/02 22:26:21 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/* #include <stdio.h>

int	main(void)
{
	char	*str;
	int		length;

	str = "abc";
	length = ft_strlen(str);
	printf("%i\n", length);
	return (0);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:45:59 by fbui-min          #+#    #+#             */
/*   Updated: 2024/11/21 16:37:49 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[0] != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/* #include <stdio.h>

int	main(void)
{
	char	*string;
	int		length;

	string = "abef";
	length = ft_strlen(string);
	printf("Length: %i\n", length);
	return (0);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:33:16 by fbui-min          #+#    #+#             */
/*   Updated: 2024/11/21 16:39:58 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (str[0] != '\0')
	{
		write(1, &str[0], 1);
		str++;
	}
	return ;
}

/* int	main(void)
{
	char	*string;

	string = "abcd";
	ft_putstr(string);

	return (0);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:49:00 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/02 22:26:47 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
	return ;
}

/* int	main(void)
{
	char	*str;

	str = "abc";
	ft_putstr(str);
	return (0);
} */

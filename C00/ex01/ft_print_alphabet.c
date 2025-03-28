/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:41:19 by fbui-min          #+#    #+#             */
/*   Updated: 2024/11/18 12:01:18 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
	return ;
}

/* int	main(void)
{
	ft_print_alphabet();
	return (0);
} */

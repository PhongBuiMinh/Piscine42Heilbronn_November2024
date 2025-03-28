/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:43:44 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/03 04:00:59 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	j;

	if (argc <= 1)
		return (0);
	while (argv[argc - 1] != NULL && argc > 1)
	{
		j = 0;
		while (argv[argc - 1][j] != '\0')
		{
			write(1, &argv[argc - 1][j], 1);
			j++;
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}

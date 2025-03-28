/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:54:41 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/03 12:47:43 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range_arr;

	if (min >= max)
		return (NULL);
	i = 0;
	size = max - min;
	range_arr = malloc(sizeof(int) * size);
	while (i < size)
	{
		range_arr[i] = min;
		i++;
		min++;
	}
	return (range_arr);
}

/* int	main(void)
{
	int	i;
	int	*range;

	i = 0;
	range = ft_range(2, 8);
	while (range[i])
	{
		printf("%i\n", range[i]);
		i++;
	}
	free(range);
	system("leaks a.out");
	return (0);
} */

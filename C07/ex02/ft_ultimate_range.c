/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:18:35 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/05 18:12:56 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min <= max)
	{
		*range = NULL;
		return (0);
	}
	return (0);
}

/* int	main(void)
{
	int	range[] = {123, 134, 134, 13};
	int	*ptrrange = &range;
	printf("%i", ft_ultimate_range(&ptrrange, 1, 2));
	return (0);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:55:23 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/03 12:47:27 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	if (src == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc((i + 1) * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	*str;
	str = ft_strdup("abc");
	printf("%s", str);
	free(str);
	system("leaks a.out");
	return (0);
} */

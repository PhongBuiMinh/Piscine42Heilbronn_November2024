/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:57:25 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/02 16:53:50 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char	str1[5] = "hello";
	char	*concatenated;

	concatenated = ft_strncat(str1, "world", 2);
	concatenated = ft_strncat(str1, "abcd", 2);
	printf("%s", concatenated);
	return (0);
} */

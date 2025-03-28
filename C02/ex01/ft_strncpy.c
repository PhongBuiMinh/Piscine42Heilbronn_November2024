/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:43:55 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/03 04:33:07 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char			*src;
	char			dest[28];
	char			*coppied;
	unsigned int	size;

	src = "abcdefghijklmnopqrstuvwxyz";
	size = 15;
	coppied = ft_strncpy(dest, src, size);
	printf("%s", coppied);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:27:38 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/02 16:53:34 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[i] != '\0')
	{
		dest[count] = src[i];
		i++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char	str1[6] = "hello ";
	char	*concatenated;

	concatenated = ft_strcat(str1, "World ");
	concatenated = ft_strcat(str1, "123.\n");
	printf("%s", concatenated);
	return (0);
} */

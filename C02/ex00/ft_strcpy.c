/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:01:14 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/02 21:20:04 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (*src != '\0')
	{
		dest[count] = *src;
		src++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char	*strsrc;
	char	strdest[20];
	char	*strcoppied;

	strsrc = "abc";
	strcoppied = ft_strcpy(strdest, strsrc);
	printf("%s\n", strcoppied);

	return (0);
} */

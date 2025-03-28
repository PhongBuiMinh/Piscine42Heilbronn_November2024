/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:51:29 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/02 21:22:19 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 65 && str[count] <= 90)
			str[count] = str[count] + 32;
		count++;
	}
	str[count] = '\0';
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	char	str[5] = "ABCDE";
	char	*changed;

	changed = ft_strlowcase(str);
	printf("%s", changed);
	return (0);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:36:13 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/02 21:22:04 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 97 && str[count] <= 122)
			str[count] = str[count] - 32;
		count++;
	}
	str[count] = '\0';
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	char	str[5] = "abcd";
	char	*changed;

	changed = ft_strupcase(str);
	printf("%s", changed);
	return (0);
} */

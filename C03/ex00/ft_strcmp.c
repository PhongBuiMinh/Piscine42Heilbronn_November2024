/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:35:20 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/02 16:51:56 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != '\0')
	{
		if (s1[count] > s2[count])
			return (s1[count] - s2[count]);
		else if (s1[count] < s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	if (s1[count] != s2[count])
		return (s1[count] - s2[count]);
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	int		checkingnumber;

	str1 = "abcdefg";
	str2 = "abcdefgh";
	checkingnumber = ft_strcmp(str1, str2);
	printf("%i", checkingnumber);
	return (0);
} */

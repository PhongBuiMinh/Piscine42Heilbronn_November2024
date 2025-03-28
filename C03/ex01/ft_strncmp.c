/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbui-min <fbui-min@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:07:01 by fbui-min          #+#    #+#             */
/*   Updated: 2024/12/02 16:53:11 by fbui-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (s1[count] != '\0' && count < n)
	{
		if (s1[count] > s2[count])
			return (s1[count] - s2[count]);
		else if (s1[count] < s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	if (s1[count] != s2[count] && count < n)
		return (s1[count] - s2[count]);
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	char			*str1;
	char			*str2;
	int unsigned	maxlength;
	int				checknumber;

	str1 = "abcdefg5";
	str2 = "ab*defgh";
	maxlength = 5;
	checknumber = ft_strncmp(str1, str2, maxlength);
	printf("%i", checknumber);
	return (0);
} */

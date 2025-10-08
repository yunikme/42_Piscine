/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:51:42 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/17 14:17:30 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
#include <string.h>
int	main()
{
	char *str1 = "ABd";
	char *str2 = "ABwZ";

	printf("%s vs  %s: %d\n", str1, str2, ft_strcmp(str1, str2));
	printf("%s vs  %s: %d\n", str1, str2, strcmp(str1, str2));
	
}*/

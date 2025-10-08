/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:13:53 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/18 10:42:15 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h> 
#include <string.h>
int main()
{
	char *str1 = "abzbhfuyg";
	char *str2 = "abd";
	unsigned int size = 3; 
	printf("%s and %s, %d", str1, str2, ft_strncmp(str1, str2, size));
	printf("%s and %s, %d", str1, str2, strncmp(str1, str2, size));
}*/

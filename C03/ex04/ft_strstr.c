/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:25:25 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/18 10:45:12 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0; 
		while (str[i + j] != '\0' && str[i + j] == to_find[j]) 
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}
		++i;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char *str = "we are okay, arent we?";
	char *to_find = "are";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s", strstr(str, to_find));
}*/

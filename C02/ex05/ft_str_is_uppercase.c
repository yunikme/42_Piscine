/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:55:36 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/15 11:06:56 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int	main()
{
	char *str = "HALLO";
	char *str0 = "345l";
	printf("%s: %d\n", str, ft_str_is_uppercase(str));
	printf("%s: %d\n", str0, ft_str_is_uppercase(str0));
}*/

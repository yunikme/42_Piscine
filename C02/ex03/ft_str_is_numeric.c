/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:25:45 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/11 18:02:51 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9' ))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int	main()
{
	char *test1 = "0127863";
	char *test2 = "dnhuey224";
	printf("%s is numeric? %d\n", test1, ft_str_is_numeric(test1));
	printf("%s is numeric? %d", test2, ft_str_is_numeric(test2));
}*/

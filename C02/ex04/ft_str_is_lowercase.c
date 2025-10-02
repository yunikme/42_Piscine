/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:57:42 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/15 10:54:27 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int	main()
{	char *str = "HalloM";
	char *str1 = "halo";
	printf("%s is: %d\n", str, ft_str_is_lowercase(str));
	printf("%s is: %d", str1, ft_str_is_lowercase(str1));


}*/

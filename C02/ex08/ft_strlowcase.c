/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:00:19 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/15 11:42:00 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0; 
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str [i] = str [i] + 32;
		}
		i++;
	}
	return (str);
}

/*#include <unistd.h>
int	main()
{
	char str[] = "I wanna ICE cREAM";
	int i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}*/

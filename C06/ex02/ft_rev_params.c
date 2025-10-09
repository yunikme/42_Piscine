/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:40:38 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/25 11:51:04 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}


int	main(int argc, char *argv[])
{
	if (argc != 1)
	{
		int i = 1;
		while (i < argc)
		{
			int last = ft_strlen(argv[i]) - 1;
			while (last >= 0)
			{
				write(1, &argv[i][last], 1);
				last --;
			}
		write(1, "\n", 1);
		i++;
		}
	}
}

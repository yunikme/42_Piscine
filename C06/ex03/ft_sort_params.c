/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:51:32 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/25 13:38:01 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_strcmp(char *str1, char *str2)
{
	int i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
	{
		i++;
		
	}
	return (str1[i] - str2[i]);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}


int	main(int argc, char *argv[])
{
	if (argc != 1)
	{
		int i = 1;
		char *temp;
		while (i < argc)
		{
			int j = i + 1;
			while (j < argc)
			{
				if ((ft_strcmp(argv[i], argv[j])) >= 1)
				{	//putstr(argv[i];
					temp = argv[i];
					argv[i] = argv[j];
					argv[j] = temp;	
				}
				j++;
			}
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i++;
		} 
	}
}

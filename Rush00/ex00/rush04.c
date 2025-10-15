/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 15:41:49 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/07 13:08:10 by jgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c); 

void	print_char(int x, char first, char mid, char end)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar(first);
		}
		else if (i == x)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(mid);
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x >= 1 && y >= 1)
	{
		while (i <= y)
		{
			if (i == 1)
			{
				print_char(x, 'A', 'B', 'C');
			}
			else if (i == y)
			{
				print_char(x, 'C', 'B', 'A');
			}
			else 
			{
				print_char (x, 'B', ' ', 'B');
			}
			i++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 13:09:39 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/05 11:03:18 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a, int b, int c)
{
	char	output [5];

	output[3] = ',';
	output[0] = a;
	output[1] = b;
	output[2] = c;
	output[4] = ' ';
	if (a == 55 && b == 56 && c == 57)
		write(1, output, 3);
	else
		write(1, output, 5);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;	

	a = 48;
	while (a <= 55)
	{
		b = a + 1; 
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/

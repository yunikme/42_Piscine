/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 17:20:37 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/24 10:11:18 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	c;
	int	temp;

	i = 1;
	c = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i <= power)
	{
		temp = nb;
		c = c * temp;
		i++;
	}
	return (c);
}

/*#include <stdio.h>
int	main()
{
	int test = 2;
	int power = 4;
	printf("%d ^ %d = %d\n", test, power, ft_iterative_power(test, power));
	int test1 = 2;
    int power1 = 0;
    printf("%d ^ %d = %d\n", test1, power1, ft_iterative_power(test1, power1));
 	int test2 = 2;
	int power2 = -1;
	printf("%d ^ %d = %d\n", test2, power2, ft_iterative_power(test2, power2));
}*/

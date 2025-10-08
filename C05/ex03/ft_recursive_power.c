/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:38:13 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/24 10:12:58 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else 
		return (nb * ft_recursive_power(nb, power - 1));
}

/*#include <stdio.h>
int	main()
{
	int test1 = 2;
	int power1 = 3;
	int test2 = 0;
	int power2 = 0;
	int power3 = -1;
	printf("%d ^ %d is %d\n", test1, power1, ft_recursive_power(test1, power1));
	printf("%d ^ %d is %d\n", test2, power1, ft_recursive_power(test2, power1));
	printf("%d ^ %d is %d\n", test1, power2, ft_recursive_power(test1, power2));
	printf("%d ^ %d is %d\n", test1, power3, ft_recursive_power(test1, power3));
}*/

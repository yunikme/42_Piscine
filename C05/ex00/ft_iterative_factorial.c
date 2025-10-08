/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 15:51:54 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/24 10:09:20 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	out;
	int	i;

	out = 1;
	i = 2;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		out = out * i;
		i++;
	}
	return (out);
}
/*#include <stdio.h>
int	main()
{
	int	num = 5;
	printf("%d ! = %d\n", num, ft_iterative_factorial(num));
	int num1 = 0;
	printf("%d ! = %d\n", num1, ft_iterative_factorial(num1));
	int num2 = -1;
	printf("%d ! =  %d\n", num2,  ft_iterative_factorial(num2));
	return 0;
}*/

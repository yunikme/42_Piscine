/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:06:09 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/24 10:03:45 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	else 
		return (nb * (ft_recursive_factorial(nb - 1)));
}

/*#include <stdio.h>
int	main()
{
	int n = -1;
	printf("Factorial of %d = %d\n", n, ft_recursive_factorial(n));
	int n1 = 2; 
	printf("Factorial of %d = %d\n", n1, ft_recursive_factorial(n1));
	int n2 = 5; 
	printf("Factorial of %d = %d\n", n2, ft_recursive_factorial(n2));
 	int n3 = 0; 
	printf("Factorial of %d = %d\n", n3, ft_recursive_factorial(n3));
}*/

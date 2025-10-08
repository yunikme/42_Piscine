/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:00:49 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/24 10:00:21 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>
int main()
{
	printf("The negative fibonacci is %d\n",ft_fibonacci(-4));
	printf("The 0 fibonacci is %d\n",ft_fibonacci(0));
	printf("The 1 fibonacci is %d\n",ft_fibonacci(1));
	printf("The 2 fibonacci is %d\n",ft_fibonacci(2));
	printf("The 3 fibonacci is %d\n",ft_fibonacci(3));
	printf("The 4 fibonacci is %d\n",ft_fibonacci(4));
	printf("The 5 fibonacci is %d\n",ft_fibonacci(5));	
}*/

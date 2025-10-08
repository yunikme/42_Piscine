/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:13:00 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/23 14:52:58 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	printf("is 2 prime? %d\n", ft_is_prime(2));
	printf("is 5 prime? %d\n", ft_is_prime(5));
	printf("is 1 prime? %d\n", ft_is_prime(1));
	printf("is 11 prime? %d\n", ft_is_prime(11)); 
}*/

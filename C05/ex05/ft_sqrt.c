/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:13:17 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/24 10:14:47 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i); 
	else
		return (0);
}

/*#include <stdio.h>
int	main()
{
	printf("9 is square root of %d \n", ft_sqrt(9));
	printf("16 is square root of %d \n", ft_sqrt(16));
	printf("-1 is square root of %d \n", ft_sqrt(-1));
	printf("0 is square root of %d \n", ft_sqrt(0));
	printf("3 is square root of %d \n", ft_sqrt(3));
}*/

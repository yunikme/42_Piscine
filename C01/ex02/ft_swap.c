/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:47:11 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/10 15:33:32 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	output;

	output = *a;
	*a = *b;
	*b = output;
}

int 	main()
{
	int a;
	int b;

	a = 5;
	b = 2;
	printf("Before: 5, 2\n");
	ft_swap(&a, &b);
	printf("After: %d, %d", a, b);
}

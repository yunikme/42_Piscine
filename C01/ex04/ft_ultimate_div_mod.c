/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:16:54 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/10 15:43:24 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod; 

	div = *a / *b; 
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*#include <stdio.h>
int	main()
{
	int x = 60;
	int y = 30; 
	ft_ultimate_div_mod(&x, &y);
	printf("Result: %d, %d\n", x, y);
}*/

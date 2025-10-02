/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:00:34 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/10 15:44:26 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int main()
{
	int x = 60;
	int y = 2;
	int out = x / y;
	int rem = x % y;	
	ft_div_mod(x, y, &out, &rem);
	printf("Result: %d, %d", out, rem); 
}*

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 09:25:42 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/10 15:40:12 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp; 
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			else
				j++;
		}
		i++;
	}
}

#include <stdio.h>
int	main()
{	int x = 0;
	int tab[4] = {5,2,4,7};
	int size = sizeof(tab)/sizeof(tab[0]);
	printf("Before:\n");
	while( x < size)
	{	
		printf("%d,", tab[x]);
		x++;
	}
	ft_sort_int_tab(tab, size);
	int y = 0;
	printf("\nAfter:\n");
	while(y < size)
	{	printf("%d,", tab[y]);
		y++;}
}

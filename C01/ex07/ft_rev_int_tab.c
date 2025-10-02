/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:47:18 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/09 17:47:26 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i < size) 
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp; 
		i++;
		size--;
	}
}

/*int	main()
{
	int tab[7] = {1, 2, 3, 4, 5, 6, 7};
	int size = 7;
	ft_rev_int_tab(tab, size);
	int i;
	i = 0;
	while (i < size)
	{
		printf("%d,", tab[i]);
		i++;
	}
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:25:27 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/25 11:39:32 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int argc, char *argv[])
{
	if (argc != 1)
	{
		int i = 1; //start from the argc 1
		int j; //strat from the first char inside of each argv
		while ( i < argc)
		{	
			j = 0;
			while (argv[i][j] != '\0')
			{
				write(1, &argv[i][j], 1);
				j++;
			}
		write(1, "\n", 1);
		i++;		
		}	
	}

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 12:39:28 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/15 13:30:04 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hexa_digit(unsigned char c)
{
	char	*hexadigit;

	hexadigit = "0123456789abcdef";
	ft_putchar(hexadigit[c / 16]);
	ft_putchar(hexadigit[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			hexa_digit(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*int	main()
{
	char *str = "0ladfd\ndfj sdms?";
	ft_putstr_non_printable(str);
}*/

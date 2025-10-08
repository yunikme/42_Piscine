/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 11:20:08 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/22 16:24:27 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else 
	{
		ft_putchar(nb + 48);
	}
}

/*int main()
{
	int test = 2147483647;
	ft_putnbr(test);
	int test1 = 0;
	ft_putnbr(test1);
	int test2 = 2147483647;
	ft_putnbr(test2);
	int test5 = -2147483648;
	ft_putnbr(test5);
	int test3 = -450;
	ft_putnbr(test3);
	int test4 = 350;
	ft_putnbr(test4);
    int test6 = 5;
	ft_putnbr(test6);
}*/

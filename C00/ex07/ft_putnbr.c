#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = - nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >=0 && nb <= 9)
	{
		ft_putchar(nb + 48);
	}
}

int main()
{
	int number = 42;
	ft_putnbr(number);

}

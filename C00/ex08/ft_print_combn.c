#include <unistd.h>

void	print_comb(int n, int index, char *arr, char start)
{
	if (index == n)
	{
		int i = 0;
		while (i < n)
		{
			write (1, &arr[i], 1);
			i++;
		}
		if (arr[0] != ('9' - n + 1))
			write (1, ", ", 2);
		return;
	}
	char digit = start;
	while (digit <= '9')
	{
		arr[index] = digit;
		print_comb(n, index + 1, arr, digit + 1);
		digit++;
	}
}
void	ft_print_combn(int n)
{
	int index = 0;
	char arr[n];
	char start = '0';
	print_comb(n, index, arr, start);  
}
/*int main()
{
	write(1, "2\n", 2);
	ft_print_combn(2);
	write(1, "\n5\n", 3);
	ft_print_combn(5);
}*/

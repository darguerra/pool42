#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	char num1;
	char num2;
	char num3;

	num1 = '0';
	num2 = '1';
	num3 = '2';

	while (num1 <= '7')
	{
		while (num2 <= '8')
		{
			while (num3 <= '9')
			{
				ft_putchar(num1);
				ft_putchar(num2);
				ft_putchar(num3);
				num3++;
			}
			num2++;
			num3 = num1 + 3;
		}
		num1++;
		num2 = num1 + 1;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}

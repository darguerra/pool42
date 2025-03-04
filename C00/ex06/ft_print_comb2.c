#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char num1;
	char num2;
	char num3;
	char num4;

	num1 = '0';
	while(num1 <= '9')
	{
		num2 = '0';
		while(num2 <= '9')
		{
			num3 = num1;
			num4 = num2 +1;
			while(num3 <= '9')
			{
				while(num4 <= '9')
				{
					ft_putchar(num1);
					ft_putchar(num2);
					ft_putchar(' ');
					ft_putchar(num3);
					ft_putchar(num4);
					if(!(num1 == '9' && num2 == '8'))
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
					num4++;
				}
				num3++;
				num4 = '0';
			}
			num2++;
		}
		num1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}

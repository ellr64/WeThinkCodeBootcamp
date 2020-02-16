#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	int		digit;
	int		newnum;
	char	c;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	digit = num % 10;
	c = digit + '0';
	newnum = num / 10;
	if (newnum > 0)
	{
		ft_putnbr(newnum);
	}
	ft_putchar(c);
}

int		main(void)
{
	int num;
	num = 42;
	ft_putnbr(num);
	return 0;
}

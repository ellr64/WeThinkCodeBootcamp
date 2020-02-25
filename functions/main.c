
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_line(char left, char mid, char right, int len)
{
	int y;

	if (len > 0)
	{
		ft_putchar(left);
	}
	y = 1;
	while (y < len - 1)
	{
		ft_putchar(mid);
		y++;
	}
	if (len > 1)
	{
		ft_putchar(right);
	}
	if (len > 0)
	{
		ft_putchar('\n');
	}
}

void	rush(int w, int h)
{
	char topside = 'a';
	char botside = 'b';
	char leftside = 'c';
	char rightside = 'd';
	char topleft = '1';
	char topright = '2';
	char botleft = '3';
	char botright = '4';
	char mid = ' ';
	char newline = '\n';
	int x;

	if (h > 0)
	{
		ft_line(topleft, topside, topright, w);
	}
	x = 1;
	while (x < h - 1)
	{
		ft_line(leftside, mid, rightside, w);
		x++;
	}
	if (h > 1)
	{
		ft_line(botleft, botside, botright, w);
	}
}

int		main(void)
{
	rush(0, 4);
	return (0);
}

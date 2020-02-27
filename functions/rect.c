#include <unistd.h>

//This code prints a rectangle with the given dimensions and symbols
//This was part of the colle00 assignment, the first weekend rush

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//The initial idea using no other user defined functions

void    rect_initial()
{
    int h = 4;
    int w = 5;
    char topside = '-';
    char botside = '-';
    char leftside = '|';
    char rightside = '|';
    char topleft = 'o';
    char topright = 'o';
    char botleft = 'o';
    char botright = 'o';
    char space = ' ';
    char newline = '\n';
    int x;
    int y;

    x = 0;
    y = 0;
    while (x < h)
    {
        y = 0;
        while (y < w)
        {
            if (x == 0)
            {
                if (y == 0)
                {
                    write(1, &topleft, 1);
                }
                else if (y == w - 1)
                {
                    write(1, &topright, 1);
                }
                else
                {
                    write(1, &topside, 1);
                }
            }
            else if (x == h - 1)
            {
                if (y == 0)
                {
                    write(1, &botleft, 1);
                }
                else if (y == w - 1)
                {
                    write(1, &botright, 1);
                }
                else
                {
                    write(1, &botside, 1);
                }
            }
            else
            {
                if (y == 0)
                {
                    write(1, &leftside, 1);
                }
                else if (y == w - 1)
                {
                    write(1, &rightside, 1);
                }
                else
                {
                    write(1, &space, 1);
                }
            }
            y++;
        }
        write(1, &newline, 1);
        x++;
    }
}

//The above code was simplified, with repeating lines combined into the ft_line function

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

void	rect(int w, int h)
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
	rush(5, 4);
	return (0);
}

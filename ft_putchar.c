#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char	c;
	c = 'a';
	putchar(c);
	return (0);
}

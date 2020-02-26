#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

void    ft_putstr(const char *str)
{
	int i;

	if (!str)
	{
		ft_putchar('\0');
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int len;
	int i;

	if (argc != 4)
	{
		return (0);
	}
	if (ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
	{
		return (0);
	}
	i = 0;
	len = ft_strlen(argv[1]);
	while (i < len)
	{
		if (argv[1][i] == argv[2][0])
		{
			ft_putchar(argv[3][0]);
		}
		else
		{
			ft_putchar(argv[1][i]);
		}
		i++;
	}
	return (0);
}

/*
int	main(int argc, char **argv)
{
	int len;
	int i;

	if (argc == 0)
	{
		return (0);
	}
	if (ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
	{
		return (0);
	}
	len = ft_strlen(argv[1]);
	char strout[len];
	i = 0;
	while (i < len)
	{
		if (argv[1][i] == argv[2][0])
		{
			strout[i] = argv[3][0];
		}
		else
		{
			strout[i] = argv[1][i];
		}
		i++;
	}
	ft_putstr(strout);
	return (0);
}
*/

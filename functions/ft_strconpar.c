#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

char	*ft_strcon(char *str1, char *str2)
{
	char *str;
	int len;
	int i;
	int j;

	len = ft_strlen(str1) + ft_strlen(str2);
	str = (char*)malloc(len - 1);
	i = 0;
	j = 0;
	while (i < len)
	{
		if (i < ft_strlen(str1))
		{
			str[i] = str1[i];
		}
		else if (j < ft_strlen(str2))
		{
			str[i] = str2[j];
			j++;
		}
		i++;
	}
	str[i] = '\0';
	return str;
}

char	*ft_concat_params(int argc, char **argv)
{
	int		len;
	int		i;
	//int		c;
	char	*str;

	len = 0;
	i = 1;
	while (i < argc)
	{
		len += ft_strlen(argv[i++]);
	}
	len += argc - 2;
	//str = (char*)malloc(len);
	str = argv[1];
	i = 2;
	//c = 0;
	while (i < argc)
	{
		ft_putnbr(i);
		ft_putstr("\n");
		ft_putstr(str);
		ft_putstr("\n");
		str = ft_strcon(str, "\n");
		str = ft_strcon(str, argv[i]);
		//c += ft_strlen(argv[i]);
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	char *st = ft_concat_params(argc, argv);
	ft_putstr(st);
	return 0;
}

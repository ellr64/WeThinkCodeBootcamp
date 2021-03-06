/*Duplacate given src string to new dest string*/
/*The new memory location must be different*/

#include <unistd.h>

/*Library needed for malloc function*/
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		len;

	/*Find length of source string*/
	len = 0;
	while (src[len])
	{
		len++;
	}

	/*Assign appropriate memory (len + 1 chars) to dest*/
	/*and cast to char pointer*/
	dest = (char*)malloc(sizeof(*src) * (len + 1));

	/*Copy character from each index*/
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}

	/*End string with null char*/
	dest[len] = '\0';

	return (dest);
}

int		main(void)
{
	char	*src = "Hello there";
	char	*dest;

	ft_putstr(src);
	ft_putstr("\n");
	dest = ft_strdup(src);
	ft_putstr(dest);
	ft_putstr("\n");
}

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

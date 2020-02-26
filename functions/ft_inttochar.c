char	ft_chartoint(int n)
{
	char c;

	c = '\0';
	if (n >= 0 && n <= 9)
	{
		c = n + '0';
	}
	return (c);
}

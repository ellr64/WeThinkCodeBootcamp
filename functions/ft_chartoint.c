int	ft_chartoint(char c)
{
	int num;

	num = 0;
	if (c >= '0' && c <= '9')
	{
		num = c - '0';
	}
	return (num);
}

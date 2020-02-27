int	ft_strcmp(char *str1, char *str2)
{
	int i;
	int cmp;

	i = 0;
	while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
	{
		i++;
	}
	cmp = (int)str1[i] - (int)str2[i];
	return (cmp);
}

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

//Old code that is too simple. Not exactly what was required
/*
int	ft_strcmp(char *s1, char *s2)
{
	return (*s1 - *s2);
}
*/

/*Program to print out last word in string*/
/*Words are seperated by spaces ' ' or tabs '\t'*/
/*There can be any number of spaces or tabs between words, and at the start and end of the string*/

/*Library required for write function*/
#include <unistd.h>

/*This first vesion is what I would use*/
/*Code that iterates backwards from end of string*/
void	last_word(char *str)
{
	int		i;
	int		len;
	int		wordend;
	int		wordstart;
	char	c;

	/*Get length of string*/
	while (str[len])
	{
		len++;
	}

	/*Skip all spaces and tabs at end of string*/
	i = len - 1;
	while ((str[i] == ' ' || str[i] == '\t') && i >= 0)
	{
		i--;
	}
	wordend = i;

	/*Searches for the start of the last word, preceded by a space or tab*/
	while ((str[i] != ' ' && str[i] != '\t') && i >= 0)
	{
		i--;
	}
	wordstart = i + 1;

	/*Prints out the last word*/
	i = wordstart;
	while (i <= wordend)
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

/*This is another solution I have seen*/
/*Code iterates through the string, and finds the last occurance of the pattern: (space)(nonspace)*/
/*
void	*last_word(char *str)
{
	int i;
	int wordstart;
	char c;

	wordstart = 0;
	i = 1;
	while (str[i])
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t') && (str[i] != ' ' && str[i] != '\t'))
		{
			wordstart = i;
		}
		i++;
	}
	i = wordstart;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}
*/

int		main(int argc, char **argv)
{
	/*Print the last word only if there is one argument*/
	if (argc == 2)
	{
		last_word(argv[1]);
	}

	/*Always print a newline*/
	write(1, "\n", 1);
	return (0);
}

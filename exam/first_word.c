/*Program to print out first word in string*/
/*Words are seperated by spaces ' ' or tabs '\t'*/
/*There can be any number of spaces or tabs between words, and at the start and end of the string*/

/*Library needed for write function*/
#include <unistd.h>

void	first_word(char *str)
{
	int i;
	int len;
	char c;

	/*Get length of string*/
	len = 0;
	while(str[len] != '\0')
	{
		len++;
	}

	i = 0;

	/*Skip all spaces and tabs at start of string*/
	while((str[i] == ' ' || str[i] == '\t') && i < len)
	{
		i++;
	}

	/*Print all characters until the next space or tab*/
	while((str[i] != ' ' && str[i] != '\t') && i < len)
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	/*Print the first word only if there is one argument*/
	if (argc == 2)
	{
		first_word(argv[1]);
	}

	/*Always print a newline*/
	write(1, "\n", 1);
	return (0);
}

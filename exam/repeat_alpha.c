/*Program to print out each character in a string n number of times*/
/*where n is the position of the letter in the alphabet ie a = 1, b = 2, etc.*/
/*eg abCd prints abbCCCdddd*/

/*Library required for write function*/
#include <unistd.h>

/*Gets the value associated with the letter*/
int		get_alphanum(char c)
{
	int num;


	/*For lowercase*/
	if (c >= 'a' && c <= 'z')
	{
		num = (int)c - 'a' + 1;
	}
	/*For uppercase*/
	else if (c >= 'A' && c <= 'Z')
	{
		num = (int)c - 'A' + 1;
	}
	/*For non-letters*/
	else
	{
		num = 1;
	}

	return (num);
}

void	repeat_alpha(char *str)
{
	int i;
	int rep;
	int num;
	char c;

	/*Loops through string, printing out each character*/
	i = 0;
	while (str[i])
	{
		c = str[i];
		num = get_alphanum(c);
		rep = 0;
		while (rep < num)
		{
			write(1, &c, 1);
			rep++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
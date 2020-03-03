/*Duplacate given src string to new dest string*/
/*The new memory location must be different*/

/*Library needed for malloc function*/
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		len;

	/*Find length of source string*/
	len = 0;
	while (dest[len])
	{
		len++;
	}

	/*Assign appropriate memory (len + 1 chars) to dest*/
	src = (char*)malloc((*src) * (len + 1));

	/*Copy character from each index*/
	int i = 0;
	while (i < len)
	{
		dest[i] = src[i];
	}

	/*End string with null char*/
	dest[len] = '\0';

	return (dest);
}
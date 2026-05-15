#include "main.h"

/**
 *leet -  encodes a string into 1337
 *@str:contains string
 *Return:str
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char let[] = "aAeEoOtTlL";
	char rep[] = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;

		while (rep[j] != '\0')
		{
			if (str[i] == let[j])
			{
				str[i] = rep[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}


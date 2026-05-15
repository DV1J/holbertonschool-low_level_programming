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
		for (j = 0; rep[j] != '\0'; j++)
		{
			if (str[i] == let[j])
			{
				str[i] = rep[j];
			}
		}
		i++;
	}
	return (str);
}


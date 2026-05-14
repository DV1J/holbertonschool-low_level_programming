#include "main.h"

/**
 *cap_string - capitalizes all words of a string
 *@str: contains string
 *Return: str
 */
char *cap_string(char *str)
{
	int i;
	int j;
	char scp[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
		}
		for (j = 0; scp[j] != '\0'; j++)
		{
			if (str[i] == scp[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);
}

#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the converted number
 */
int _atoi(char *s)
{
	int i;
	int sign = 1;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				num = (num * 10) + (s[i] - '0');
				i++;
			}
			return (num * sign);
		}
	}
	return (0);
}

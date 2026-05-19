#include "main.h"
#include <ctype.h>
/**
 *main - adds positive numbers.
 *@argc: contains arguments
 *@argv: array of arguments
 *Return: 1 || 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 0)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i][0]))
		{
			printf("Error\n");
			return (1);
		}
		 sum = sum + atoi(argv[i]);
	}
		printf("%d\n", sum);
		return (0);
}

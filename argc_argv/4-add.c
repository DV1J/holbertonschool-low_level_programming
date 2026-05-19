#include "main.h"

/**
 *main - adds positive numbers.
 *@argc: contains arguments
 *@argv: array of arguments
 *Return: i a
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc == 0)
	{
		printf("0\n");
	}
	else if (argc >= 'a' && argc <= 'z')
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

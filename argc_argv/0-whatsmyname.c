#include "main.h"

/**
 *main -  prints name of program, followed by a new line
 *@argc: numeber of commands
 *@argv: array of commands
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}
	return (0);
}

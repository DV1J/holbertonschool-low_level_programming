#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 48; n <= 57; n++)
{
putchar(n);
}

for (n = 97; n <= 102; n++)
{
putchar(n);
}

putchar('\n');

return (0);
}

#include <stdio.h>

/**
 * main - prints all single digit number of base 10 starting 0
 * followed by a new line, without saving char variables
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
putchar ('\n');

return (0);
}

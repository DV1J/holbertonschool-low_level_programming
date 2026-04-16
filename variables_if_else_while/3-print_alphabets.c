#include <stdio.h>

/*
 * main - prints the alphabet in lowercase, then uppercase
 *
 * Returne: Always 0 (Success)
 */
int main(void)
{
int letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar (letter);
}
for (letter = 'A'; lateer <= 'Z'; letter++)
{
putchar (letter);
}
putchar ('/n');

return (0);
}

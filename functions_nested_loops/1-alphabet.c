#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 * Using putchar only twice in the whole source code (per your requirement).
 */
void print_alphabet(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch); // First putchar
    }
    putchar('\n'); // Second putchar
}

int main(void)
{
    print_alphabet();
    return (0);
}

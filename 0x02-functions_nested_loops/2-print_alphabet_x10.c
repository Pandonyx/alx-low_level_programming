#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase English alphabet to the console
 * 10 times, followed by a new line each time.
 */
void print_alphabet_x10(void)
{
char letter;
int i;
for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}

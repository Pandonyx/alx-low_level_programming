#include <stdio.h>
#include "main.h"
/**
 * print_rev - Prints a string in reverse to stdout, followed by a new line.
 * @s: The string to be printed in reverse.
 *
 * Return: void.
 */
void print_rev(char *s)
{
int len = 0;
int i;
while (*(s + len) != '\0')
len++;
for (i = len - 1; i >= 0; i--)
putchar(*(s + i));
putchar('\n');
}

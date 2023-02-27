#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string to stdout,
 * followed by a new line.
 * @str: The string to be printed.
 * Return: void.
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
putchar(str[i]);
}
putchar('\n');
}

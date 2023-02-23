#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a straight line of '_' characters
 * @n: the number of '_' characters to print
 *
 * Return: void
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}

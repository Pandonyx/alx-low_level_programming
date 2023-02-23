#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line of '\' characters
 * @n: the number of '\' characters to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}

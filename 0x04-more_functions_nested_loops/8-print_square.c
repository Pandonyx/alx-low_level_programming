#include "main.h"
#include <stdio.h>
/**
 * print_square - Prints a square using '#' character.
 * @size: The size of the square to be printed.
 *
 * Return: void
 */
void print_square(int size)
{
int row, col;
if (size <= 0)
{
_putchar('\n');
return;
}
for (row = 1; row <= size; row++)
{
for (col = 1; col <= size; col++)
{
_putchar('#');
}
_putchar('\n');
}
}

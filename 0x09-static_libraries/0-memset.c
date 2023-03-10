#include "main.h"
#include <stdio.h>
/**
 * _memset - Fills memory with a constant byte
 *
 * @s: A pointer to the memory area to be filled
 * @b: The constant byte used to fill the memory area
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *ptr = s;
for (i = 0; i < n; i++)
{
*ptr = b;
ptr++;
}
return (s);
}

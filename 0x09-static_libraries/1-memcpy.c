#include "main.h"
#include <stdio.h>
/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 *
 * @dest: A pointer to the destination memory area
 * @src: A pointer to the source memory area
 * @n: The number of bytes to be copied
 *
 * Return: A pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *ptr_dest = dest;
char *ptr_src = src;
for (i = 0; i < n; i++)
{
*ptr_dest = *ptr_src;
ptr_dest++;
ptr_src++;
}
return (dest);
}

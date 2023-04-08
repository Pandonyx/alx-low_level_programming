#include "main.h"
/**
 * get_endianness - check endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
int num = 1;
char *ptr = (char *)&num;
do {
if (*ptr == 1)
{
return (1);
}
ptr++;
} while (ptr < ((char *)&num + sizeof(int)));
return (0);
}

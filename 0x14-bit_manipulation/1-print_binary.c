#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
unsigned long int temp = n;
int shifts = 0;
if (n == 0)
{
printf("0");
return;
}
do {
shifts++;
temp >>= 1;
} while (temp > 0);
do {
shifts--;
if ((n >> shifts) & 1)
printf("1");
else
printf("0");
} while (shifts > 0);
}

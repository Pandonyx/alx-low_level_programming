#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[5] = {98, 102, 34, 45, 63};
int *p;
p = &a[2];
*p = 98;
printf("a[2] = %d\n", *(p));
return (0);
}

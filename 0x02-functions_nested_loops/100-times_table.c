#include <stdio.h>
/**
 * print_times_table - prints an n times table
 * @n: the number of rows and columns in the table
 */
void print_times_table(int n)
{
int i, j, res;
if (n < 0 || n > 15)
{
return;
}
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
res = i * j;
if (j == 0)
{
printf("%d", res);
}
else
{
printf(", %d", res);
}
}
printf("\n");
}

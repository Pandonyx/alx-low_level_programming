#include <stdio.h>
#include <unistd.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
{
c = i + '0';
putchar(c);
}
for (i = 0; i < 6; i++)
{
c = i + 'a';
putchar(c);
}
putchar('\n');
return (0);
}

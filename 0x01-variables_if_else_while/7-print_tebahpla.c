#include <stdio.h>
#include <unistd.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}

#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *s)
{
int i, j;
char leet_letters[] = "aAeEoOtTlL";
char leet_numbers[] = "4433007711";
for (i = 0; s[i]; i++)
{
for (j = 0; leet_letters[j]; j++)
{
if (s[i] == leet_letters[j])
{
s[i] = leet_numbers[j];
break;
}
}
}
return (s);
}

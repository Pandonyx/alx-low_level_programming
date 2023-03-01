#include "main.h"
#include <stdio.h>
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: String to modify
 *
 * Return: Pointer to modified string
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
i++;
}
return (str);
}

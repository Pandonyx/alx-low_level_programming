#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
/* Check if the character is in the uppercase or lowercase letter range */
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}

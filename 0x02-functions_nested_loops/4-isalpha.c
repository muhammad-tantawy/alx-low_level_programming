#include "main.h"

/**
 * _isalpha - checks if a character is alphabetical.
 * @c:character to check.
 *
 * Return: 1 if c is a letter, 0 otherwise.
 */
int _isalpha(int c);
{
if (c >= 'a' && c <= 'Z')
{
return 1;
}
else
{
return 0;
}
}

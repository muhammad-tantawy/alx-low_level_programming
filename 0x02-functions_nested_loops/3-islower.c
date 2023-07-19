/**
 * _islower - checks if a character is lowercase.
 * @c:character to check.
 *
 * Return: 1 if c is lowercase, 0 is not lowercase.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return 1;
}
else
{
return 0;
}
}

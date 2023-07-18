/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return:On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c);

/**
 * print_alphabet - This is to print letters
 * Return:0
*/

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}

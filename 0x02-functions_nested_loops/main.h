#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_alphabet - This is to print letters
 * Return:0
*/

void print_alphabet(void)
{
char d = 'a';
while (d <= 'z')
{
_putchar(d);
d++;
}
_putchar('\n');
}

#include "main.h"

/**
 * print_alphabet*10 - This is to print letters
 * Return:0
*/

void print_alphabet_x10(void)
{
char c;
int i;
for (i = 0; i < 10; i++)
{
c= 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}    

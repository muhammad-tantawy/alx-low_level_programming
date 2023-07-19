#include "main.h"

void print_to_98(int n)
{
int i, digit, is_negative = 0;
if (n < 0)
{
is_negative = 1;
n = -n;
}
if (n <= 98)
{
for (i = n; i < 98; i++)
{
digit = i;
if (is_negative)
{
_putchar('-');
}
if (digit >= 10)
{
_putchar(digit / 10 + '0');
digit %= 10;
}
_putchar(digit + '0');
if (i != 97)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (i = n; i > 97; i--)
{
digit = i;
if (is_negative)
{
_putchar('-');
}
if (digit >= 10)
{
_putchar(digit / 10 + '0');
digit %= 10;
}
_putchar(digit + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('9');
_putchar('8');
_putchar('\n');
}

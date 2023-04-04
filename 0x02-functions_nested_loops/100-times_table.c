#include "main.h"
/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int b, c, d;
for (c = 0; c <= n; c++)
{
for (b = 0; b <= n; b++)
{
d = b * c;

if (b == 0)
_putchar(d + '0');
else if (d <= 9)
{
_putchar(32);
_putchar(32);
_putchar(d + '0');
}
else if (d >= 10 && d <= 99)
{
_putchar(32);
_putchar(((d / 10) % 10) + '0');
_putchar((d % 10) + '0');
}
else
{
_putchar((d / 100) + '0');
_putchar(((d / 10) % 10) + '0');
_putchar((d % 10) + '0');
}
if (b != n)
{
_putchar(',');
_putchar(32);
}
}
_putchar('\n');
}
}
}

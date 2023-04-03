#include "main.h"

/**
 * print_line -  Write a function that draws a straight line in the terminal
 *
 * @n: this is the entry
 *
 *
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}

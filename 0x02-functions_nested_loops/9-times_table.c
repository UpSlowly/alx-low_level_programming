#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int number, times, nine;
for (number = 0; number <= 9; number++)
{
_putchar(48);
for (times = 1; times <= 9; times++)
{
_putchar(',');
_putchar(' ');
nine = number * times;
if (nine <= 9)
{
_putchar(' ');
}
else
{
_putchar((nine / 10) + 48);
_putchar((nine % 10) + 48);
}
_putchar('\n');
}
}
}

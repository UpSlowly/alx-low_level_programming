#include "main.h"
/**
 * print_number - Write a function that prints an integer with putchar
 * @n: This is my number to print
 *
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
{
print_number(n / 10);
}
_putchar((n % 10) + '0');
}

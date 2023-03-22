#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int val)
{
int lastdgt;
if (val < 0)
lastdgt = -1 * (val % 10);
else
{
lastdgt = val % 10;
_putchar(lastdgt + '0');
return (lastdgt);
}
return (0);
}

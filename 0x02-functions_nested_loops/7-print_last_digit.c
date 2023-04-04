#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{

    n = n % 10;

    if (n < 0)
    {
        n = -n;
    }
    else
    {
        _putchar(n + '0');
    }
    return (n);
}

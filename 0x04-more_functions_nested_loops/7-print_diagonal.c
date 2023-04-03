#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: this is the size of the diagonal
 *
 * Return: There is no error
 **/

void print_diagonal(int n)
{
    int i, s;
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            for (s = 1; s <= i; s++)
            {
                _putchar(' \ ');
                _putchar(50);
            }
        }
    }
}
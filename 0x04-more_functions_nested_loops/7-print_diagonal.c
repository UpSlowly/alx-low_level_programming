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
if (n <= 0)
{
_putchar('\n');
return;
}
int i, j;
for (i = 0; i < n; i++)
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
}

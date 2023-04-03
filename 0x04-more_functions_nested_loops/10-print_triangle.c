#include "main.h"
/**
 * print_triangle - Write a function that prints a triangle, followed by a new
 * line.
 * @size: demensions of triangle
 * Return: nothing
 **/
void print_triangle(int size)
{
int i, j;
if (size <= 0) {
_putchar('\n');
return;
}
for (i = 1; i <= size; i++) {
for (j = 1; j <= i; j++) {
_putchar('#');
}
_putchar('\n');
}
}

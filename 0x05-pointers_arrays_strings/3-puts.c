#include "main.h"
/**
 * _puts - prints a string
 * @str: the string
 * Return: the length of the string
 */
void _puts(char *str)
{
while (*str)
{
putchar(*str++);
}
putchar('\n');
}

#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
int print10, put;
for (print10 = 0; print10 <= 10; print10++)
{
for (put = 'a'; put <= 'z'; put++)
{
_putchar(put);
_putchar('\n');
}
}
}

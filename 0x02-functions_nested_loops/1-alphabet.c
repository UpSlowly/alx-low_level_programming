/*
Write a function that prints the alphabet, in lowercase, followed by a new line.

    Prototype: void print_alphabet(void);
    You can only use _putchar twice in your code
*/

#include "main.h"

void print_alphabet(void)
{
    int put;

    for (put = 'a'; put <= 'z'; put++)
        _putchar(put);
    _putchar('\n');
}

/*
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

    Prototype: void print_alphabet_x10(void);
    You can only use _putchar twice in your code
*/

#include "main.h"

void print_alphabet_x10(void)
{
    int print10, put;

    for (print10 = 0; print10 <= 10; print10++)
    {
        for (put = 'a'; put <= 'z'; put++)
        {
            /* code */
            _putchar(put);
            _putchar('\n');
        }
    }
}
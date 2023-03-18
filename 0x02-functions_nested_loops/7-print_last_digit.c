/*
Write a function that prints the last digit of a number.
    Prototype: int print_last_digit(int);
    Returns the value of the last digit
*/

#include "main.h"

int print_last_digit(int val)
{
    int lastdgt;
    if (val < 0)
        lastdgt = -1 * (val % 10);
    else
    {
        /* code */
        lastdgt = val % 10;
        _putchar(lastdgt + '0');
        return (lastdgt);
    }
    return 0;
}
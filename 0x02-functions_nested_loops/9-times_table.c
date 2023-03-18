/*
Write a function that prints the 9 times table, starting with 0.

    Prototype: void times_table(void);
*/

#include "main.h"

void times_table(void)
{
    int number, times, nine;
    for (number = 0; number <= 9; number++)
    {
        /* code */
        _putchar(48);
        for (times = 1; times <= 9; times++)
        {
            /* code */
            _putchar(',');
            _putchar(' ');

            nine = number * times;

            if (nine <= 9)
            {
                _putchar(' ');
            }
            else
            {
                /* code */
                _putchar((nine / 10) + 48);
                _putchar((nine % 10) + 48);
            }
            _putchar('\n');
        }
    }
}
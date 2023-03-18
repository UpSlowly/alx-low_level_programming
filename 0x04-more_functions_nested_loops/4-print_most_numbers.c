/*
Write a function that prints the numbers, from 0 to 9, followed by a new line.

    Prototype: void print_most_numbers(void);
    Do not print 2 and 4
    You can only use _putchar twice in your code
*/
#include "main.h"

void print_most_numbers(void)
{
    int printnumber;
    for (printnumber = 0; printnumber <= 9; printnumber++)
    {
        if (printnumber == 2 || printnumber == 4)
        {
            /* code */
            continue;
            _putchar(printnumber + 48);
        }
            else
            {

                _putchar('\n');
            }
        }
    }

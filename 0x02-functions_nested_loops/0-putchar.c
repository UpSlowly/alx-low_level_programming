/*
Write a program that prints _putchar, followed by a new line.

    The program should return 0
*/

#include "main.h"

int main(void)
{
    char string[] = "_putchar";
    int put;

    for (put = 0; put < 8; put++)
        _putchar(string[put]);
    _putchar('\n');

    return (0);
}

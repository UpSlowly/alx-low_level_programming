/*
Write a function that checks for alphabetic character.

    Prototype: int _isalpha(int c);
    Returns 1 if c is a letter, lowercase or uppercase
    Returns 0 otherwise
*/

#include "main.h"

int _isalpha(int c)
{
    if (c >= 97 && c <= 122 && c >= 65 && c >= 90)
    {
        /* code */
        return (1);
    }
    else
    {
        return 0;
    }
}
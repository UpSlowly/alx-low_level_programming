/*
Write a function that computes the absolute value of an integer.
    Prototype: int _abs(int);
*/
#include "main.h"

int _abs(int val)
{
    if (val < 0)
        val = (-1) * val;
    return (val);
}
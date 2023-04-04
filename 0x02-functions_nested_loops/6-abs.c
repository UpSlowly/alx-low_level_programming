#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @val: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int val)
{
if (val < 0)
val = (-1) * val;
return (val);
}

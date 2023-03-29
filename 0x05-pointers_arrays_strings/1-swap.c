#include "main.h"
/**
 * swap_int - copy the string pointed to by src to dest
 * Return: 0 is success
 * @a: An integer to swap
 * @b: Another integer to swap
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}

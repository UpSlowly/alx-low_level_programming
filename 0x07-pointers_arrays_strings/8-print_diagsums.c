#include "main.h"
/**
 * print_diagsums - print the sum the diognals of a square matrix of integer
 *
 * @a: This is the array to sum
 * @size: This is the length of the array
 */

void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < size * size; i += size + 1)
{
sum1 += a[i];
}
for (i = size - 1; i < size * size - 1; i += size - 1)
{
sum2 += a[i];
}
printf("%d, %d\n", sum1, sum2);
}

#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a given number
 * @n: the number to factorize
 *
 * Return: the largest prime factor
 */
long int largest_prime_factor(long int n)
{
long int factor = 2;
while (factor * factor <= n)
{
if (n % factor == 0)
{
n /= factor;
}
else
{
factor++;
}
}
return (n);
}
int main(void)
{
long int n = 612852475143;
long int largest_factor = largest_prime_factor(n);
printf("%ld\n", largest_factor);
return (0);
}

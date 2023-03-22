#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
int count;
if (n > 98)
for (count = n; count > 98; count--)
{
printf("%d", count);
}
else
{
for (count = n; count < 98; count++)
{
printf("%d", count);
}
printf("98\n");
}
}

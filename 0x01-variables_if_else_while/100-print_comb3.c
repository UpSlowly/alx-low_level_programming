#include <stdio.h>
/**
* main - Print numbers from 00 to 99 without repeating
* Return: 0 for success
*/

int main(void)
{
int diffcomb = 0, diffcomb1;
while (diffcomb <= 24)
{
diffcomb1 = 0;
while (diffcomb1 <= 24)
{
if (diffcomb != diffcomb1 && diffcomb < diffcomb1)
{
putchar(diffcomb + 48);
putchar(diffcomb1 + 48);
if (diffcomb + diffcomb1 != 24)
{
putchar(',');
putchar(' ');
}
}
diffcomb1++;
}
}
putchar('n');
return (0);
}

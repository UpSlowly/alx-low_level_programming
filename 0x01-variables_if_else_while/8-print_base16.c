#include <stdio.h>

/**
* main - Print Numbers Hexadecimal
*
* Return: 0 for success
*
**/

int main(void)
{
for (int i = 0; i < 16; i++)
{
int c = i < 10 ? i + '0' : i - 10 + 'a';
putchar(c);
}
putchar('\n');
return (0);
}

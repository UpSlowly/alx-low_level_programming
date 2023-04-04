#include <stdio.h>
/**
 * main - Print numbers from "0" to "9"
 * Return: 0 for success
 */
int main(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
putchar(digit);
printf("\n");
return (0);
}

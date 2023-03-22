#include "main.h"
/**
 *  main - Print _putchar
 *  Return: Always 0
 */
int main(void)
{
char string[] = "_putchar";
int put;
for (put = 0; put < 8; put++)
_putchar(string[put]);
_putchar('\n');
return (0);
}

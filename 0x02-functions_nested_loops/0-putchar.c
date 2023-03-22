#include "main.h"
/**
 *  main -Entry point
 *
 *  Return: Always 0 (Success)
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

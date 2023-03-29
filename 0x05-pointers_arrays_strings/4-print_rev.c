#include "main.h"

void print_rev(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
s--;
while (length > 0)
{
putchar(*s);
s--;
length--;
}
putchar('\n');
}

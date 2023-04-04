#include <stdio.h>

/**
* main - Alphabet between "a" and "z", except "q" and "e"
* Return: 0 for success
*/

int main(void)
{
char alf = 'a';
while (alf <= 'z')
{
if (alf == 'e' || alf == 'q')
alf++;
putchar(alf);
alf++;
}
putchar('\n');
return (0);
}

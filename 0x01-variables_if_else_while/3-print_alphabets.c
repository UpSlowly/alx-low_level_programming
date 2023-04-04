#include <stdio.h>

/**
* main - Letter from "a" to "z" and "z" to "a"
* Return: 0 for success
*/

int main(void)
{
char alf = 'a';
char ALF = 'A';

while (alf <= 'z')
{
putchar(alf);
alf++;
}

while (ALF <= 'Z')
{
putchar(ALF);
ALF++;
}
putchar('\n');

return (0);
}

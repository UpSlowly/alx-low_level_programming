#include <stdio.h>
/**
* main - Print alphabet with capital letters
* Return: 0 for success
*/
int main(void)
{
char alf = 'a';
while (alf <= 'z')
{
putchar(alf);
alf++;
}
putchar('\n');
return (0);
}

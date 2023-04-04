#include <stdio.h>
/**
* main - Print alphabet backwards
*
* Return: 0 for success
*/
int main(void)
{
char alf = 'z';
while (alf >= 'a')
{
putchar(alf);
alf--;
}
putchar('\n');
return (0);
}

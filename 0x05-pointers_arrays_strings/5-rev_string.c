#include "main.h"
/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 *
 * Description: This will reverse a string
 * Return: 0 is success
 */
void rev_string(char *s)
{
int len = strlen(s);
char temp;
for (int i = 0; i < len/2; i++)
{
temp = s[i];
s[i] = s[len-1-i];
s[len-1-i] = temp;
}
}

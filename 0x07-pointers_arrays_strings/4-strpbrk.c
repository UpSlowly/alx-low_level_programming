#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * The _strpbrk() function locates the first occurrence in the string s of any
 * of the bytes in the string accept
 *
 * @s: This is the input string
 * @accept: This is the string to locate
 *
 * Return: Returns a pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}

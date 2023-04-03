#include "main.h"
/**
 * _strncat - Write a function that concatenates two strings. it will use at
 *            most n bytes from src
 *
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes fro src
 *
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
while (dest[dest_len] != '\0')
{
dest_len++;
}
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';
return (dest);
}

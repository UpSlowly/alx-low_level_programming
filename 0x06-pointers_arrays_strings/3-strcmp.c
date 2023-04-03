#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: an integer greater than, equal to, or less than 0, according as
 * the string s1 is greater than, equal to, or less than the string s2.
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
i++;
return (s1[i] - s2[i]);
}

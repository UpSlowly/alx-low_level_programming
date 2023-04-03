#include "main.h"
/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @str: This is my input string
 *
 * Return: String converted to rot13
 *
 */

char *rot13(char *str)
{
    int i, j;
    char *rot = str;
    char *from = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *to = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (i = 0; str[i]; i++)
    {
        for (j = 0; from[j]; j++)
        {
            if (str[i] == from[j])
            {
                rot[i] = to[j];
                break;
            }
        }
    }
    return rot;
}

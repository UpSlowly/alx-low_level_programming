#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: This is the input string
 * @c: This is the character
 * Return: Return to the character found, if not return a NULL
 */

char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    if (c == '\0') {
        return s;
    }
    return NULL;
}

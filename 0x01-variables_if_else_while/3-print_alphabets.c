/*
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    All your code should be in the main function
    You can only use putchar three times in your code
*/

#include <stdio.h>

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
/*
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

    All your code should be in the main function

*/
#include <stdio.h>

int main(void)
{
    int singdgt = 0;
    while (singdgt <= 10)
    {
        printf("%i ", singdgt);
        singdgt++;
    }
    printf("\n");
    return 0;
}
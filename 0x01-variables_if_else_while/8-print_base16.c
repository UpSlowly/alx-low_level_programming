/*
Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    All your code should be in the main function
    You can only use putchar three times in your code
*/

#include <stdio.h>

int main(void)
{
    int singnum = 24;

    while (singnum <= 102)
    {
        putchar(singnum);
        
//Search on this meaning
        if (singnum == 57)  
            singnum += 39;
        singnum++;
    }
    putchar('\n');
    putchar('\n');
    return 0;
}
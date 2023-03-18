/*
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

    The variable n will store a different value every time you run this program
    You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
    The output of the program should be:
        The string Last digit of, followed by
        n, followed by
        the string is, followed by
            if the last digit of n is greater than 5: the string and is greater than 5
            if the last digit of n is 0: the string and is 0
            if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
        followed by a new line
*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    int n, digit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* your code goes there */
    digit = n % 10;

    if (digit > 5)
        printf("Last digit of,  %i is %i and is greater than 5\n", n, digit);
    else if (digit == 0)
        printf("Last digit of, %i is %i and is 0\n", n, digit);
    else if (digit < 6 && digit != 0)
        printf("Last digit of, %i is %i and is less than 6 and not 0\n", n, digit);

    return (0);
}

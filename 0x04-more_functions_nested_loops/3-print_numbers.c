#include "main.h"

int main(void)
{
    print_numbers();
    return (0);
}

void print_numbers(void)
{
    int num = 0;
    do
    {
        putchar(num + 48);
        num++;
    } while (num >= 0 && num <= 9);
    putchar('\n');
};

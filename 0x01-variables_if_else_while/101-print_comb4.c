#include <stdio.h>
int main(void)
{
    int diffcomb1, diffcomb2, diffcomb3;

    for (diffcomb1 = 0; diffcomb1 < 8; diffcomb1++)
    {
        for (diffcomb2 = diffcomb1 + 1; diffcomb2 < 9; diffcomb2++)
        {
            for (diffcomb3 = diffcomb2 + 1; diffcomb3 < 10; diffcomb3++)
            {
                putchar((diffcomb1 % 10) + '0');
                putchar((diffcomb2 % 10) + '0');
                putchar((diffcomb3 % 10) + '0');

                if (diffcomb1 == 7 && diffcomb2 == 8 && diffcomb3 == 9)
                    continue;
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return (0);
}

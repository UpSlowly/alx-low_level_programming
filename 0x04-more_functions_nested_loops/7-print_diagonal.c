/*
Write a function that draws a diagonal line on the terminal.

    Prototype: void print_diagonal(int n);
    You can only use _putchar function to print
    Where n is the number of times the character \ should be printed
    The diagonal should end with a \n
    If n is 0 or less, the function should only print a \n
*/

void print_diagonal(int n)
{
    int i, s;
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            for (s = 1; s <= i; s++)
            {
                _putchar(' \ ');
                _putchar(50);
            }
        }
    }
}
#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  *(p + 5) = 98;
  /*
   * The above line assigns the value 98 to the memory location that
   * is 5 integers away from the address of n, effectively overwriting
   * whatever value was stored there previously (this is undefined
   * behavior, and should not be done in real programs).
   */
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(p + 2) = 98;
  /* ...so that this prints 98\n */
  printf("add of n: %p\n", &n);
  printf("add of a0: %p\n", &(a[0]));
  printf("add of a1: %p\n", &(a[1]));
  printf("add of a2: %p\n", &(a[2]));
  printf("add of a3: %p\n", &(a[3]));
  printf("add of a4: %p\n", &(a[4]));
  printf("add of p + 2: %p\n", &p + 2);
  return (0);
}

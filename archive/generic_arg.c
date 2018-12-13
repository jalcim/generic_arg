#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

void **compress(int size, ...);
int main()
{
  void **ret;
  int a, b, c, d;

  a = 1;
  b = 2;
  c = 3;
  d = 4;
  
  ret = compress(4, &a, &b, &c, &d);
  printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
  return (0);
}

void **compress(int size, ...)
{
  void **arg = (void **)malloc(4*sizeof(void *));
  va_list ap;

  va_start(ap, size);
  arg[0] = va_arg(ap, void *);
  arg[1] = va_arg(ap, void *);
  arg[2] = va_arg(ap, void *);
  arg[3] = va_arg(ap, void *);
  va_end(ap);
  return (arg);
}


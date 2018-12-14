#include <stdarg.h>
#include <stdlib.h>

void **make_arg(int size, ...)
{
  void **arg;
  va_list ap;
  int i;

  arg = (void **)malloc(size * sizeof(void *));
  va_start(ap, size);
  i = -1;
  while (++i < size)
    arg[i] = va_arg(ap, void *);
  va_end(ap);
  return (arg);
}

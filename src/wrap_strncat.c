#include <string.h>
#include <stdlib.h>

void *wrap_strncat(void **arg)
{
  char *str1, *str2;
  int *len;

  str1 = (char *)arg[0];
  str2 = (char *)arg[1];
  len = (int *)arg[2];
  free(arg);
  return (strncat(str1, str2, *len));
}

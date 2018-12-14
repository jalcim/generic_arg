#include <stdarg.h>
#include <string.h>


void *wrap_strncat(char *fmt, ...)
{
  va_list ap;
  char *str1, *str2;
  int len;

  va_start(ap, fmt);
  str1 = va_arg(ap, char *);
  str2 = va_arg(ap, char *);
  len = va_arg(ap, int);
  va_end(ap);
  return (strncat(str1, str2, len));
}

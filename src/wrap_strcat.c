#include <stdarg.h>
#include <string.h>

void *wrap_strcat(char *fmt, ...)
{
  va_list ap;
  char *str1, *str2;

  va_start(ap, fmt);
  str1 = va_arg(ap, char *);
  str2 = va_arg(ap, char *);
  va_end(ap);
  return (strcat(str1, str2));
}

#include <sys/mman.h>
#include <stdio.h>
#include <string.h>

void *wrap_strcat(void *arg)
{
  char *str1, *str2;

  str1 = ((char **)arg)[0];
  str2 = ((char **)arg)[1];
  return (strcat(str1, str2));
}

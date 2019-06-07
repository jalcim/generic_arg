#include <sys/mman.h>
#include <stdio.h>
#include <string.h>

void *wrap_strcat(void **arg)
{
  return (strcat((char *)arg[1], (char *)arg[0]));
}

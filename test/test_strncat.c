#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../include/wrap.h"
#include "../include/tools.h"

int test_strncat_basic()
{
  char *str1, *str2;
  int len;
  int ret;

  str1 = malloc(100);
  strcpy(str1, "salut");
  str2 = strdup(" ca couille ?");
  len = 3;

  wrap_strncat(NULL, str1, str2, len);

  free(str2);
  ret = strcmp(str1, "salut ca");
  free(str1);
  return (ret);
}

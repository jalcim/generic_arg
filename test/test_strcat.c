#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../include/wrap.h"
#include "../include/tools.h"

int test_strcat_basic()
{
  void **arg;
  char *str1, *str2;
  int ret;

  str1 = malloc(100);
  strcpy(str1, "salut");
  str2 = strdup(" ca couille ?");

  arg = make_arg(2, str1, str2);
  wrap_strcat(arg);

  free(str2);
  ret = strcmp(str1, "salut ca couille ?");
  free(str1);
  return (ret);
}

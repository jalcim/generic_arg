#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../include/wrap.h"
#include "../include/tools.h"

int test_strcat_basic()
{
  char *str1, *str2;
  int ret;

  str1 = malloc(100);
  strcpy(str1, "salut");
  str2 = strdup(" ca couille ?");

  wrap_strcat(NULL, str1, str2);

  free(str2);
  ret = strcmp(str1, "salut ca couille ?");
  free(str1);
  return (ret);
}

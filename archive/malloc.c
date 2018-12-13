#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *fct(void *fct);

int main()
{
  void *arg;
  char *str1, *str2;
  
  arg = malloc(4096);
  str1 = ((char **)arg)[0] = malloc(100);
  str2 = ((char **)arg)[1] = malloc(100);
  
  strcpy(str1, "salut");
  strcpy(str2, " ca couille ?\n");
  //  strcat(str1, str2);
  fct(arg);
  printf(":%s:\n", str1);
  free(((char **)arg)[0]);
  free(((char **)arg)[1]);
  free(arg);
}

void *fct(void *arg)
{
  char *str1, *str2;

  str1 = ((char **)arg)[0];
  str2 = ((char **)arg)[1];
  return (strcat(str1, str2));
}

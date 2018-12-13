#include <sys/mman.h>
#include <stdio.h>
#include <string.h>

void *fct(void *fct);

int main()
{
  void *arg;
  char *str1, *str2;
  
  arg = mmap(0, 4096, PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
  str1 = ((char **)arg)[0] = mmap(0, 100, PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
  str2 = ((char **)arg)[1] = mmap(0, 100, PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
  
  strcpy(str1, "salut");
  strcpy(str2, " ca couille ?\n");
  //  strcat(str1, str2);
  fct(arg);
  printf(":%s:\n", str1);
  munmap(((char **)arg)[0], 100);
  munmap(((char **)arg)[1], 100);
  munmap(arg, 4096);
}

void *fct(void *arg)
{
  char *str1, *str2;

  str1 = ((char **)arg)[0];
  str2 = ((char **)arg)[1];
  return (strcat(str1, str2));
}

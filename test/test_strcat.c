#include <sys/mman.h>
#include <string.h>

#include "../include/wrap.h"

int test_strcat_basic()
{
  void *arg;
  char *str1, *str2;
  int ret;
  
  arg = mmap(0, 4096, PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
  str1 = ((char **)arg)[0] = mmap(0, 100, PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
  str2 = ((char **)arg)[1] = mmap(0, 100, PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
  
  strcpy(str1, "salut");
  strcpy(str2, " ca couille ?");
  wrap_strcat(arg);
  ret = 0;
  if (strcmp(str1, "salut ca couille ?"))
    ret = -1;
  munmap(((char **)arg)[0], 100);
  munmap(((char **)arg)[1], 100);
  munmap(arg, 4096);
  return (ret);
}


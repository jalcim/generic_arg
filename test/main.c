#include "test.h"
#include <stdio.h>

int main()
{
  test_strcat_basic() ? perror("strcat : FAIL") : printf("strcat : OK\n");
  test_strncat_basic() ? perror("strncat : FAIL") : printf("strncat : OK\n");
}

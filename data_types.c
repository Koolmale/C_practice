/*returning the size of data types using limits.h and the sizeof operator*/
#include <stdio.h>
#include <limits.h>

int main() {
  printf("short... \t size: %lu bytes \t", sizeof(short));

  printf("%d and %d \n", SHRT_MAX, SHRT_MIN);

  printf("long... \t size: %lu bytes \t", sizeof(long));

  printf (" %ld to %ld \n", LONG_MAX, LONG_MIN);

  printf("char... \t size: %lu byt e \n", sizeof(char));

  printf("float... \t size: %lu bytes \n", sizeof(float));

  printf("double... \t size: %lu bytes \n", sizeof(double));

  return 0;
}

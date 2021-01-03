/*creating constant types with the typedef keyword*/

#include <stdio.h>

int main () {
  enum SNOOKER
    {RED=1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK};

  enum SNOOKER pair = RED + BLACK;
  printf("Pair Value: %d \n", pair);

  typedef unsigned short int USINT;

  USINT num = 16;

  printf("Unsigned short int value: %i \n", num);

  return 0;
}

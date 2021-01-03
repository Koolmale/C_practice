/*The enum keyword allows to create a clean and concise sequence of integers, and unless specified the sequence always starts with 0*/

#include <stdio.h>

int main () {
  enum SNOOKER
    {RED=1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK};

  int total;

  printf("\n I potted a red worth %d \n", RED);
  printf("Then a black worth %d \n", BLACK);
  printf("Followed by another red worth %d \n", RED);
  printf("And finally a blue worth %d \n", BLUE);

  total = RED + BLACK + RED + BLUE;

  printf("\n Altogether I scored %d \n", total);

  return 0;
}

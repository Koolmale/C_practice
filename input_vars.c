#include <stdio.h>

int main() {
  char letter;
  int num1, num2;
  printf("Enter any one keyboard character: ");
  scanf("%c", &letter);
  printf("Enter any two integers seperated by a space: ");
  scanf("%i %i", &num1, &num2);

  printf("Numbers input: %d and %d \n", num1, num2);
  printf ("Letter input: %c \n", letter);
  printf("Letter Stored at %p \n", &letter);
  return 0;
}

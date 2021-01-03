/* declaring program constants using the const keyword*/

#include <stdio.h>

int main () {
  const float PI = 3.141593;

  float diameter;
  float radius;
  float circ;
  float area;

  printf("Enter the diameter of a circle in milimeters:");
  scanf("%f", &diameter);

  circ = PI * diameter;
  radius = diameter / 2;
  area = PI * (radius * radius);

  printf(" \n \t Circumference is %.2f mm", circ);
  printf("\n \t And the are is %.2f sq.mm", area);

  return 0;
}

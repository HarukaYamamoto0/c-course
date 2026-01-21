#include <stdio.h>
#include <math.h>
#include <string.h>

const double PI = 3.1415926535;

int main() {
  char measure[9] = "radius";

  float radius = 0.0f;
  float diameter = 0.0f;
  float area = 0.0f;

  printf("What measurement do you want to provide (radius or diameter)?: ");
  scanf("%8s", measure);

  if (strcmp(measure, "radius") == 0) {
    printf("What is the radius of the circle?: ");
    scanf("%f", &radius);

    diameter = radius * 2;
    area = PI * pow(radius, 2);
  } else if (strcmp(measure, "diameter") == 0) {
    printf("What is the diameter of the circle?: ");
    scanf("%f", &diameter);

    radius = diameter / 2;
    area = PI * pow((diameter / 2), 2);
  } else {
    printf("Try again and enter a valid value!\n");
    return 1;
  }

  printf("The radius is: %.2f\n", radius);
  printf("The diameter is: %.2f\n", diameter);
  printf("The area of ​​the circle is: %.2f\n", area);

  return 0;
}
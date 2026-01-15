#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

const double PI = 3.1415926535;

int main() {
  float radius = 0.0f;
  float area = 0.0f;

  printf("What is the radius of the circle?: ");
  scanf("%f", &radius);

  area = PI * pow(radius, 2);

  printf("The area of ​​the circle is: %.2f\n", area);

  return 0;
}
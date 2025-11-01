#include <stdio.h>
#include <math.h>

int main() {
  int x = 2;
  int y = 3;

  printf("Sum: %d\n", x + y);
  printf("Sub: %d\n", x - y);
  printf("Mul: %d\n", x * y);
  printf("Div: %f\n", (double)x / y); // cast
  printf("Rest: %d\n", x % y);

  x++;
  y--;

  printf("X Plus: %d\n", x);
  printf("Y Minus: %d\n", y);

  x+=2;
  x-=2;
  x*=2;
  x/=2;
  x%=2;

  return 0;
}
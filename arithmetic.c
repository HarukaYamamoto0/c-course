#include <stdio.h>

int main() {
  int x = 10;
  int y = 20;

  x++;
  y--;
  x+=2;
  y-=2;

  printf("Sum: %d\n", x + y);
  printf("Sub: %d\n", x - y);
  printf("Mult: %d\n", x * y);
  printf("Div: %.2f\n", (float) x / (float) y);

  return 0;
}
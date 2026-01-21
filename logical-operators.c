#include <stdio.h>

int main() {
  int temp = -25;

  if (temp <= 0 || temp >= 47) {
    printf("The temperature is BAD!\n");
  } else {
    printf("The temperature is GOOD!\n");
  }

  return 0;
}
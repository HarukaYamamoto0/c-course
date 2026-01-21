#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int max = 50;
  int min = 0;

  srand(time(NULL));
  int random = (rand() % (max - min + 1)) + min;

  printf("%d\n", random);
  return 0;
}
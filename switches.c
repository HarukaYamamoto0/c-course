#include <stdio.h>

int main() {
  int dayOfWeek = 1;

  switch(dayOfWeek) {
    case 1: {
      printf("It is sunday\n");
      break;
    }
    case 2: {
      printf("It is monday\n");
      break;
    }
    case 3: {
      printf("It is tuesday\n");
      break;
    }
    case 4: {
      printf("It is wednesday\n");
      break;
    }
    case 5: {
      printf("It is thursday\n");
      break;
    }
    case 6: {
      printf("It is friday\n");
      break;
    }
    default: {
      printf("It is aturday\n");
      break;
    }
  }

  return 0;
}
#include <stdio.h>

int main() {
  int age = 0;

  if (age >= 18) {
    printf("You are an adult!\n");
  } else if(age <= 0) {
    printf("You're a baby!\n");
  } else {
    printf("You are not an adult!\n");
  }

  return 0;
}
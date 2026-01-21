#include <stdio.h>
#include <stdbool.h>

int main() {
  float ticketPrice = 10.0f;
  bool isStudent = true; // 10% discount
  bool isSenior = false; // 20% discount

  float discount = isStudent ? 
    isSenior ? 0.30f : 0.10f
    : 0.20f;

  if (isStudent && isSenior) {
    printf("You get a double discount of 30%%\n");
  } else if (isStudent) {
    printf("You get a student discount of 10%%\n");
  } else if (isSenior) {
    printf("You get a senior discount of 20%%\n");
  } else {
    printf("You did not receive any discount...\n");
  }

  printf("The price of a ticket is %.1f\n", ticketPrice * (1 - (discount)));

  return 0;
}
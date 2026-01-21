#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int newAttempt();

int main() {
  printf("*** NUMBER GUESSING GAME ***\n");
  
  srand(time(NULL));
  int randomNumber = (rand() % 100 - 0) - 0;
  int attemp = newAttempt();
  
  printf("%d\n", randomNumber);

  while (attemp != randomNumber)
  {
    printf("TOO %s!\n", attemp > randomNumber ? "HIGH" : "LOW");
    attemp = newAttempt();
  }
  
  printf("You guessed the correct number: %d\n", randomNumber);
  return 0;
}

int newAttempt() {
  int choice = 0;

  printf("Guess a number between 1 - 100: ");
  scanf("%d", &choice);

  return choice;
}
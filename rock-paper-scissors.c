#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int getUserChoice();
int getComputerChoice();
char *choiceToText(int choice);
int checkWinner(int playerChoice, int computerChoice);

int main() {
  printf("*** ROCK PAPER SCISSORS ***\n");

  printf("Choosen an option\n1 - ROCK\n2 - PAPER\n3 - SCISSORS\n");

  int playerChoice = getUserChoice();
  if (playerChoice > 3 || playerChoice < 1) {
    printf("Enter a valid number! (1, 2, or 3)\n");
    return 1;
  }

  char *playerChoiceInText = choiceToText(playerChoice);
  printf("You choice %s!\n", playerChoiceInText);

  int computerChoice = getComputerChoice();
  char *computerChoiceInText = choiceToText(computerChoice);
  printf("Computer chose %s!\n", computerChoiceInText);

  int winner = checkWinner(playerChoice, computerChoice);

  switch (winner)
  {
  case 1:
    printf("Congratulations, you won!\n");
    break;
  case 2:
    printf("You lost!\n");
    break;
  default:
    printf("It was a draw!\n");
    break;
  }

  free(playerChoiceInText);
  free(computerChoiceInText);
  
  return 0;
}

int getUserChoice() {
  int playerChoice = 0;

  printf("Enter your choice: ");
  scanf("%d", &playerChoice);

  return playerChoice;
}

int getComputerChoice() {
  srand(time(NULL));
  int computerChoice = (rand() % (3 - 1 + 1)) + 1;

  return computerChoice;
}

char *choiceToText(int choice) {
  char *choiceInText = malloc(9);

  switch (choice)
  {
  case 1:
    strncpy(choiceInText, "ROCK", 8);
    break;
  case 2:
    strncpy(choiceInText, "PAPER", 8);
    break;
  case 3:
    strncpy(choiceInText,"SCISSORS", 8);
    break;
  default:
    return NULL;
    break;
  }

  return choiceInText;
}

int checkWinner(int playerChoice, int computerChoice) {
  int winner = 0;
  
  switch (playerChoice)
  {
  case 1:
    if (computerChoice == 1) winner = 0;
    else if (computerChoice == 2) winner = 2;
    else winner = 1;
    break;
  case 2:
    if (computerChoice == 1) winner = 1;
    else if (computerChoice == 2) winner = 0;
    else winner = 2;
    break;
  case 3:
    if (computerChoice == 1) winner = 2;
    else if (computerChoice == 2) winner = 1;
    else winner = 3;
    break;
  default:
    break;
  }

  return winner;
}
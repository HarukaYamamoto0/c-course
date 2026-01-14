#include <stdio.h>
#include <stdbool.h>

int main() {
  // Variable = It is a container that allows you to store a value of a specific type.

  int age = 0;
  age = 20; // Changing the container value
  int year = 2026;

  printf("At this point in time, I am %d years old.\n", age);
  printf("The year is %d\n", year);

  float averege = 6.5f;
  float PI = 3.14159265358979f;
  
  printf("Their average final grade was %.1f\n", averege);
  printf("The first nine digits of PI are: %.9lf\n", PI);

  char letter = 'Z';
  char newLine = '\n'; // \n is considered a special character.
  char tab = '\t';
  char symbol = '!';

  printf("The chosen letter was: %c %cThis space %cwas the tab%c%c%c", letter, newLine, tab, symbol, newLine, newLine);

  char name[] = "Albert";
  char food[] = "apples";
  char email[] = "harukayamomotodev@gmail.com";

  printf("My name is %s\n", name);
  printf("I like %s\n", food);
  printf("My email is %s\n", email);

  bool isOnlline = true; // or 1

  if (isOnlline) {
    printf("I'm onlline\n");
  } else {
    printf("I'm offline\n");
  }

  return 0;
}
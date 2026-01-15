#include <stdio.h>
#include <string.h>

int main() {
  int age = 0;
  float gpa = 0.0f;
  char grade = '\0';
  char name[36] = "";

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Enter your gpa: ");
  scanf("%f", &gpa);

  printf("Enter your grade: ");
  scanf(" %c", &grade); // To fix the broken line

  getchar(); // same effect as the blank character in scanf
  printf("Enter your name (max: 36): ");
  fgets(name, sizeof(name), stdin); // scanf cannot capture phrases, only words.
  name[strlen(name) -1] = '\0'; // When you press the enter key to send the response, this action is recorded as \n

  printf("Your name is: %s\n", name);
  printf("Your age is: %d\n", age);
  printf("Your agpa is: %.2f\n", gpa);
  printf("Your grade is: %c\n", grade);

  return 0;
}
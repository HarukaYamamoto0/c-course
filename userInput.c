#include <stdio.h>
#include <string.h>

int main() {
  int age = 0;
  float gpa = 0.0;
  char grade = '\0';
  char name[64] = "";

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Enter your gpa: ");
  scanf("%f", &gpa);

  printf("Enter your grade: ");
  scanf(" %c", &grade);

  getchar();
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin); // sizeof get size automatic
  name[strlen(name) - 1]; // remove brank line

  printf("Age is %d\n", age);
  printf("Gpa is %.2f\n", gpa);
  printf("Grade is %c\n", grade);
  printf("Name is %s\n", name);

  return 0;
} 
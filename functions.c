#include <stdio.h>
#include <string.h>

void hello(char name[7], int age);

int main() {
  char name[] = "Albert";
  int age = 20;

  hello(name, age);
  return 0;
}

void hello(char name[7], int age) {
  printf("Hello my name is %s\n", name);
  printf("I am %d years old\n", age);
}
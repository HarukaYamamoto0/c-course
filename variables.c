#include <stdio.h>
#include <stdbool.h>

int main() {
  // A variable is a container that allows you to store values.

  printf("\n======== Float ========\n\n");
  
  float gpa = 2.5;
  float price = 19.99;
  float temperature = 34.5;

  printf("Your gpa is %.1f\n", gpa);
  printf("The price is %.2f\n", price);
  printf("Temperature is %.1f\n", temperature);

  printf("\n======== Double ========\n\n");

  double pi = 3.14159265358979323846;
  double euler = 2.718281828459045235360287;

  printf("The value of pi is %.15lf\n", pi);
  printf("The value of euler is %.60lf\n", euler);

  printf("\n======== Char ========\n\n");

  char grade = 'A';
  char symbol = '!';
  char currency = '$';

  printf("Your grade is %c\n", grade);
  printf("Yor symbol favorite is %c\n", symbol);
  printf("The currency is %c\n", currency);

  printf("\n======== String ========\n\n");

  char name[] = "Haruka";
  char food[] = "Pizza";
  char email[] = "harukayamamotodev@gmail.com";
  
  printf("Hello %s\n", name);
  printf("Your favorite food is %s\n", food);
  printf("Your emial is %s\n", email);

  printf("\n======== Boolean ========\n\n");

  bool isOnlline = true;

  if (isOnlline)
    printf("User is onlline\n");
  else
    printf("User is oflline\n");

  return 0;
}
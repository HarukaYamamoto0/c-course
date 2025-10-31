#include <stdio.h>

int main() {
  int age = 19;
  float price = 20.5;
  double pi = 3.14159265358979323846;
  char currency = '$';
  char name[] = "Haruka Yamamoto";

  printf("Age is %d\n", age);
  printf("The price is %.2f\n", price);
  printf("pi is %lf\n", pi);
  printf("The currency is %c\n", currency);
  printf("My name is %s\n", name);

  printf("\n======== Width ========\n\n");

  int num1 = 1;
  int num2 = 10;
  int num3 = 100;

  printf("%4d\n", num1);
  printf("%4d\n", num2);
  printf("%4d\n", num3);
  
  printf("\n");

  printf("%-4d\n", num1);
  printf("%-4d\n", num2);
  printf("%-4d\n", num3);
  
  printf("\n");

  printf("%04d\n", num1);
  printf("%04d\n", num2);
  printf("%04d\n", num3);

  printf("\n");

  int num4 = -100;

  printf("%+d\n", num1);
  printf("%+d\n", num2);
  printf("%+d\n", num4);

  printf("\n======== Precision ========\n\n");

  float price1 = 19.99;
  float price2 = 19.99;
  float price3 = -100.00;

  printf("%+7.1f\n", price1); // Imprecission
  printf("%+7.2f\n", price2); // 7 is min width
  printf("%+7.2f\n", price3);

  return 0;
}
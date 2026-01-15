#include <stdio.h>

int main() {
  int age = 25;
  float price = 19.99;
  double pi = 3.1415926535;
  char currency = '$';
  char name[] = "Albert";

  printf("\n=============== Default Formatters ===============\n\n");

  printf("%d\n", age);
  printf("%f\n", price);
  printf("%lf\n", pi);
  printf("%c\n", currency);
  printf("%s\n", name);

  printf("\n=============== Styles ===============\n\n");

  int num1 = 1;
  int num2 = 10;
  int num3 = 100;

  printf("%3d\n", num1);
  printf("%3d\n", num2);
  printf("%3d\n\n", num3);

  printf("%-3d\n", num1);
  printf("%-3d\n", num2);
  printf("%-3d\n\n", num3);

  printf("%03d\n", num1);
  printf("%03d\n", num2);
  printf("%03d\n\n", num3);

  printf("%+d\n", num1);
  printf("%+d\n", num2);
  printf("%+d\n\n", num3);

  printf("\n=============== Precision ===============\n\n");

  float price1 = 19.99;
  float price2 = 1.50;
  float price3 = -100.00;

  printf("%+7.2f\n", price1);
  printf("%+7.2f\n", price2);
  printf("%+7.2f\n\n", price3);

  return 0;
}
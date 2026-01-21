#include <stdio.h>

int main() {
  double firstNumber = 0.0;
  double secondNumber = 0.0;
  char operator = '\0';
  double result = 0.0;

  printf("Enter the first number: ");
  scanf("%lf", &firstNumber);

  getchar();
  printf("Enter the o operator (+, -, *, /): ");
  scanf("%c", &operator);
  
  getchar();
  printf("Enter the second number: ");
  scanf("%lf", &secondNumber);

  switch (operator)
  {
  case '+':
    result = firstNumber + secondNumber;
    break;
  case '-':
    result = firstNumber - secondNumber;
    break;
  case '/':
    result = firstNumber / secondNumber;
    break;
  case '*':
    result = firstNumber * secondNumber;
    break;
  default:
    printf("The %c operator is invalid.", operator);
    return 1;
    break;
  }

  printf("Result: %.2lf\n", result);

  return 0;
}
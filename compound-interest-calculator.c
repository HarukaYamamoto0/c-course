#include <stdio.h>
#include <math.h>

int main() {
  double capital;
  double monthlyFee;
  int months;
  double amount;

  printf("What is your initial capital?: ");
  scanf("%lf", &capital);

  printf("What is the monthly interest rate? (e.g., 5%% per month): ");
  scanf("%lf", &monthlyFee);
  monthlyFee /= 100.0;

  printf("For how many months?: ");
  scanf("%d", &months);

  amount = capital * pow(1.0 + monthlyFee, months);

  printf("The amount after %d months is: %.2f\n", months, amount);
  printf("The calculated interest was: %.2f\n", amount - capital);

  return 0;
}

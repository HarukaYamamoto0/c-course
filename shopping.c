#include <stdio.h>
#include <string.h>

int main() {
  char productName[36] = "";
  float productPrice = 0.0f;
  int quantity = 0;

  printf("What item would you like to buy?: ");
  fgets(productName, sizeof(productName), stdin);
  productName[strlen(productName) - 1] = '\0';

  printf("What is the price for each?: ");
  scanf("%f", &productPrice);

  printf("How many would you like?: ");
  scanf("%d", &quantity);

  printf("You have bought %d %s/s\n", quantity, productName);
  printf("The total is: $%.2f\n", (float)(quantity * productPrice));

  return 0;
}
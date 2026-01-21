#include <stdio.h>

int main() {
  char choice = '\0';
  float celsius = 0.0f;
  float fahrenheit = 0.0f;

  printf("Is the temperature in Celsius (C) or Fahrenheit (F)?: ");
  scanf("%1c", &choice);

  if (choice == 'C') {
    printf("What is the temperature in celsius?: ");
    scanf("%f", &celsius);

    float temperature = (celsius * 1.8f) + 32;
    printf("%.1f°C to Fahrenheit is %.1f°F\n", celsius, temperature);
  } else if(choice == 'F') {
    printf("What is the temperature in Fahrenheit?: ");
    scanf("%f", &fahrenheit);

    float temperature = (fahrenheit - 32) * 0.55f;
    printf("%.1f°F to Celsius is %.1f\n", fahrenheit, temperature);
  } else {
    printf("Invalid choice, choose C or F!\n");
    return 1;
  }

  return 0;
}
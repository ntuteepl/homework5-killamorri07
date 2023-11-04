#include <stdio.h>

int main() {
    float celsius;
    double fahrenheit;

    // Prompt the user for input
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result with one decimal point and padded zeros
    printf("Temperature in Fahrenheit: %.1lf\n", fahrenheit);

    return 0;
}


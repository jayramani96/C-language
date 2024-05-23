#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    float fahrenheit = celsiusToFahrenheit(celsius);
    
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}

/*Task 1: Temperature Converter and Formatter
Goal: Convert temperature from Celsius to Fahrenheit.
Requirements:
Declare a variable celsius (float) and fahrenheit (float).
Prompt the user to enter the temperature in Celsius.
Use the formula: $\text{fahrenheit} = (\text{celsius} \times 9.0 / 5.0) + 32.0$.
Print both Celsius and Fahrenheit values rounded to exactly 2 decimal places.*/
#include<stdio.h>

int main(){
    float celsius;
    float fahrenheit;

    printf("Enter Temperature in Celsius: ");
    scanf("%f",&celsius);

    fahrenheit = (celsius*(9.0/5.0)+32);

    printf("Celsius: %.2f\nFahrenheit: %.2f", celsius,fahrenheit);
    return 0;
}

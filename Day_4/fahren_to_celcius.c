#include<stdio.h>
int main(){
    float input;
    
    printf("Enter the value of Fahrenheit: ");
    scanf("%f",&input);
    float celsius = (input-32)*5/9;
    printf("%f",celsius);
}
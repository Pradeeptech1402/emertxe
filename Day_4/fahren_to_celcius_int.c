#include<stdio.h>
int main(){
    int fahrenheit;
    float celsius;
    
    printf("Enter the Fahrenheit value: ");
    scanf("%d",&fahrenheit);
    
    celsius = (fahrenheit-32)*(5.0/9);
    printf("%f",celsius);
}
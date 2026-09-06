#include<stdio.h>
int main(){
    int base=1;
    int exponent=1;
    int value=1;
    printf("Enter the base value: ");
    scanf("%d",&base);
    printf("\nEnter teh exponential value: ");
    scanf("%d",&exponent);
    for(int i=0;i<=exponent;i++){
        printf("%d ",value);
        value *= base;
    }
}
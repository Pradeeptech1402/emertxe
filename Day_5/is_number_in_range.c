#include<stdio.h>
int main(){
    int input;
    printf("Enter a number: ");
    scanf("%d",&input);
    if(input>=50 && input<=100){
        printf("%d is in range",input);
    }
    else{
        printf("%d is not in range",input);
    }
}
#include<stdio.h>
int main(){
    int input;
    printf("Enter a number: ");
    scanf("%d",&input);
    
    if(input>0){
        printf("The number is positive");
    }
    else if(input<0){
        printf("The number is negative");
    }else{
        printf("The number is zero");
    }
}
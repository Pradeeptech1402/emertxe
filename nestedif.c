#include<stdio.h>

int main(){
    int input;
    printf("Enter the number: ");
    scanf("%d",&input);

    if (input%2 == 0){
        if(input < 0){
            printf("%d is a Negative Even number",input);
        }else{
            printf("%d is a Even number",input);
        }
    }
    else{
        printf("%d is a odd number",input);
        if(input < 0){
            printf("%d is a Negative Odd number",input);
        }
    }
}

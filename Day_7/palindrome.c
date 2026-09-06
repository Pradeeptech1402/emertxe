#include<stdio.h>
int main(){
    int input = 0;
    int reversed = 0;
    printf("Enter teh number: ");
    scanf("%d",&input);
    int copy_input=input;
    while(copy_input != 0){
        int digit = copy_input%10;
        reversed = reversed*10+digit;
        copy_input = copy_input/10;
    }
    printf("Entered number: %d\nReversed number: %d",input,reversed);
    if(input==reversed){
        printf("\nThe Entered number is an palindrome.");
    }else{
        printf("\nThe Entered number is not an palindrome.");
    }
}
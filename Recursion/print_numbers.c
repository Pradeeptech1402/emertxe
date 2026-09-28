// _______________________________________________________________
// 1. Print Numbers from 1 to N
// Input: n = 5
// Output: 1 2 3 4 5
//-----------------------------------------------------------------
#include<stdio.h>
int print_number(int number){
    if(number>1){
        print_number(number-1);
    }
    printf("%d ",number);
}
int main(){
    int input;
    printf("Enter the number: ");
    scanf("%d",&input);
    print_number(input);
}
// ______________________________________________________________________
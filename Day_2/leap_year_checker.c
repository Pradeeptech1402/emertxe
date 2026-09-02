#include<stdio.h>

int main(){
    int input;

    printf("-----Leap_year_checker-----\n");
    printf("Enter the year: ");
    scanf("%d",&input);
    if(((input%4 == 0)&&(input%100 != 0))|| input %400 == 0){
        printf("%d is a Leap Year",input);
    }
    else{
        printf("%d is not a Leap Year", input);
    }
}
/*Task 1: Leap Year Checker (10_leap_year.c)

Goal: Determine if a given year is a leap year.

Logic Rule: A year is a leap year if:

It is divisible by 4 AND not divisible by 100, OR

It is divisible by 400.

Requirements: Prompt the user for a year (e.g., 2024, 1900, 2000) and print whether it is a Leap Year or Not a Leap Year.*/


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
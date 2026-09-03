#include<stdio.h>
int main(){
    float principal_amount,rate_of_intrest,time_period,intrest;
    
    printf("\t\t\t:::Simple_intrest_calculator:::\n");
    printf("Enter the Principal Amount , Rate of Intrest ,Time Period: ");
    scanf("%f %f %f",&principal_amount,&rate_of_intrest,&time_period);
    intrest = (principal_amount*rate_of_intrest*time_period)/100;
    printf("The total intrest is: %g",intrest);
    
}
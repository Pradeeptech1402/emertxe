#include<stdio.h>
int main(){

    // Initialize the variables required
    int start_day,nth_day,result_day;

    //Take input from User for nth day and make sure it is valid
    printf("Enter the value of 'n': ");
    scanf("%d",&nth_day);
    if(nth_day<=0||nth_day>365){
    printf("Error:Invalid Input, n value should be > 0 and <=365");
    return 0;
    }

    // Take input from User for start day and make sure it is valid
    printf("\t\t\t:::Choose First Day:::\n");
    printf("1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");
    printf("Enter teh option to set the first day: ");
    scanf("%d",&start_day);
    if(start_day<=0||start_day>7){
    printf("Error:Invalid Input, first day should be > 0 and <=7");
    return 0;
    }

    //Logic to find result day
    if(start_day+nth_day>7){
        result_day=(start_day+nth_day)%7-1;
    }else{
        result_day= (start_day+nth_day)-1;
    }

    // Print resulding day with respect to result_day
    switch(result_day){
        case 1:
        printf("The day is Sunday");
        break;
        case 2:
        printf("The day is Monday");
        break;
        case 3:
        printf("The day is Tuesday");
        break;
        case 4:
        printf("The day is Wednesday");
        break;
        case 5:
        printf("The day is Thursday");
        break;
        case 6:
        printf("The day is Friday");
        break;
        case 7:
        printf("The day is Saturday");
        break;
    }

}
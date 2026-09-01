#include<stdio.h>
int main(){
    int employeeID;
    char shift_code;
    float hourly_rate;

    printf("Enter Employe ID: ");
    scanf("%d",&employeeID);
    printf("Enter Shift Code: ");
    scanf(" %c",&shift_code);
    printf("Enter Hourly Rate: ");
    scanf("%f",&hourly_rate);

    printf("Employee ID: %d\nShift Code: %c\nHourly Rate: %f",employeeID,shift_code,hourly_rate);
}
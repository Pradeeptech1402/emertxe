/*Task 3: Electricity Bill Calculator (12_electricity_bill.c)

Goal: Practice multi-tier else if ladders.

Slabs:

First 100 units: ₹1.50 per unit

Next 100 units (101–200): ₹2.50 per unit

Beyond 200 units: ₹4.00 per unit

Requirements: Read the total units consumed (int), calculate the total bill (float), and print it formatted to 2 decimal places.*/
#include<stdio.h>

int main(){
    int no_units;
    float amount;

    printf("-----Electricity Bill Calculator-----\n");
    printf("Enter the number of Units consumed: ");
    scanf("%d",&no_units);

    if(no_units<=100){
        amount = no_units*1.50;
        printf("\nTotal Bill: %.2f",amount);
    }
    else if(no_units<=200){
        amount = 100*1.50;
        no_units -= 100;
        amount += no_units*2.50;
        printf("\nTotal Bill: %.2f",amount);
    }
    else if(no_units>200){
        amount = 100*1.50;
        no_units -= 100;
        amount += 100*2.50;
        no_units -= 100;
        amount += no_units*4.00;
        printf("\nTotal Bill: %.2f",amount);
    }
    else{
        printf("\nInvalid");
    }


}
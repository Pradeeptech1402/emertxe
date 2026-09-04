/*Task 2: Largest of Three Numbers (11_largest_of_three.c)

Goal: Read 3 distinct integers from the user.

Requirements: Use nested if-else or logical && to find and print the largest of the three numbers.*/
#include<stdio.h>

int main(){
    int input1,input2,input3;

    printf("Input First Number: ");
    scanf("%d",&input1);
    printf("Input Second Number: ");
    scanf("%d",&input2);
    printf("Input Third Number: ");
    scanf("%d",&input3);

    if(input1>=input2 && input1>=input3){
        printf("%d is Greatest\n", input1 );
    }
    else if(input2>=input3){
        printf("%d is Greatest\n", input2 );
    }
    else {
        printf("%d is Greatest\n", input3 );
    }

}
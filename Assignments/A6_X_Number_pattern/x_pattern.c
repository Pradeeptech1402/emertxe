/* Name:Pradeep R
   Date:13/09/2026
   Description:A6 - WAP to print the numbers in X format as shown below
   Sample input: Enter the number: 4
   Sample output: 1   5
                   2 4
                    3
                   2 4
                  1   5
*/
#include<stdio.h>
// Step 1 : Start
int main(){
    // Step 2 : take a input from user then store it in a variable input_number
    int input_number;
    printf("Enter the number: ");
    scanf("%d",&input_number);
    // Step 3 : Validate the input from user. if input less than 0 print "Invalid_Input" then terminate the program
    if(input_number<0){
        printf("Invalid_Input");
        return 0;
    }
    // Step 3 : create a for loop with iterations equals to n
    for(int i=1;i<=input_number;i++){
        // Step 4 : in each iteration create a for loop with iteration equals to n
        for(int j=1;j<=input_number;j++){
            // Step 5 : in each iteration have if statement that will check the condition to print the number
            if(i==j||(i+j)==input_number+1){
                printf("%d",j);
            }else{
                printf(" ");
            }
        }
        // Step 6 : after completing nested for loop print new line
        printf("\n");
    }
}
/* Name:Pradeep R
   Date:14/09/2026
   Description: A7 - WAP to print pyramid pattern as shown below
   Sample input: Enter a number: 4
   Sample output:   4
                    3 4
                    2 3 4
                    1 2 3 4
                    2 3 4
                    3 4
                    4
   
*/
#include<stdio.h>
// Step 1 : Start
int main(){
    // Step 2 : Declare the required variables (input_number)
        int input_number;
    // Step 3 : Take input from the user with label "Enter the number: " and assign it in variable 'input_number' 
        printf("Enter the number: ");
        scanf("%d",&input_number);
        // validate the input
        if(input_number<0){
            printf("\nInvalid input");
            return 0;
        }
    // Step 4 : Create a outer for loop with iterations upto (input_number).with index variable 'i'
        for(int i=0;i<input_number;i++){
        // Step 5 : Create a inner for loop with iteration 1 to input_number. with index variable 'j'
            for(int j=1;j<=input_number;j++){
            // Step 6 : Create an if statement inside inner for loop to check the condition to print numbers 
                if(i+j >= input_number){
                    //Condition(print 'j' if only 'i'+'j' >= 'input_number' )
                    printf("%d ",j);
                }
            }
            // Step 7 : Print new line after inner for loop completed
            printf("\n");
        }
        // Step 8 : Create another outer for loop with iterations 2 to (input_number).with index variable 'i'
        for(int i=2;i<=input_number;i++){
            // Step 9 : Create a inner for loop with iteration i to input_number. with index variable 'j' and print value of 'j'
            for(int j=i;j<=input_number;j++){
                printf("%d ",j);
            }
            // Step 10 : Print new line after inner for loop completed
            printf("\n");
        }
    // Step 11 : Stop
    return 0;
}



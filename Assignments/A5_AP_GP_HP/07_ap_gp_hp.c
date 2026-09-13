#include<stdio.h>
// Step 1: Start
int main(){
// Step 2: Declare the required variables. (first_number, common_difference, number_of_terms, ap, gp, hp)
int first_number,common_difference,number_of_terms,ap,gp;
float hp;
// Step 3: Take input from the user for the variables. first_number, common_difference, number_of_terms
printf("Enter the First Number 'A': ");
scanf("%d",&first_number);
printf("\nEnter the Common Difference/Ratio 'R': ");
scanf("%d",&common_difference);
printf("\nEnter the number of terms 'N': ");
scanf("%d",&number_of_terms);
// Step 4: Check whether the user input is valid.
if(number_of_terms<0){
// Step 5: If the user input is invalid (number_of_terms is less than 0), print the message
// 	"Invalid input,"then terminate the program.(return 0;)
printf("Invalid input");
return 0;
}
// Step 6: Assign ap,gp and hp the value of first_number.
ap=gp=hp=first_number;
// Step 7: Create three "for loops," each to calculate the value for ap, gp, hp, with iterations up to less than number_of_terms.
// Step 8: Add a print statement with label "AP = " and print first_number
printf("AP = %d",first_number);
// Step 9: Then, in the first 'for loop'. for each iteration, update the value of ap by adding the 	common_difference. And print the value of ap and add a comma for each value.
for(int i=1;i<number_of_terms;i++){
    ap += common_difference;
    printf(", %d",ap);
}
// Step10 : add print statement with label "GP = " with new line and print first_number
printf("\nGP = %d",gp);
// Step11 : Then in the second 'for loop ', update the value of gp by multiplying by common_difference,
// 	and print the value of gp; add a comma for each value 
for(int i=1;i<number_of_terms;i++){
    gp *= common_difference;
    printf(", %d",gp);
}
// Step12 : add print statement with label "HP = " with new line and print common_difference/first_number
printf("\nHP = %f",1/hp);
// Step13 : Then in third 'for loop' for each iteration, update the value of hp by adding the common_difference. And print the reciprocal value of hp and add a comma for each value.
for(int i=1;i<number_of_terms;i++){
    hp += common_difference;
    printf(", %f",1/hp);
}
// Step 14: Stop.
}
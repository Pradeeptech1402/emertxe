// 2. Sum of First N Natural Numbers
// Input: n = 4
// Output: 10 (Explanation: $1 + 2 + 3 + 4 = 10$)
// ------------------------------------------------------
#include<stdio.h>
int sum_of_number(int input){
    
    printf("%d",sum_of_number(input-1));
}
int main(){
    int input;
    printf("Enter the number : ");
    scanf("%d",&input);
    sum_of_number(input);
}
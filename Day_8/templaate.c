#include<stdio.h>
int main(){
    int num1=0;
    int num2=0;
    int sum=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    
    for(int i=1;i<=num1;i++){
        sum += num2;
    }
    printf("\nThe Result is %d",sum);
}
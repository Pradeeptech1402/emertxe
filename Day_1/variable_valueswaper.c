#include<stdio.h>
int main(){
    int num1;
    int num2;
    int temp;

    printf("Enter Number One: ");
    scanf("%d",&num1);
    printf("Enter Number Two: ");
    scanf("%d",&num2);

    printf("Number One = %d\nNum Two = %d\n",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("Number One = %d\nNum Two= %d", num1, num2);
}
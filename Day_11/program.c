#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter the numbers: ");
    scanf("%d %d",&num1,&num2);
    int max;
    (num1>num2)?(max=num1):(max=num2);
    (num1>num2)
    printf("max %d",max);
    // int cp_num=num;
    // int sum=0;
    // while(num>0){
    //     int digit;
    //     digit = num%10;
    //     sum += digit;
    //     num = num/10;
    // }
    // int product=1;
    // while(num>0){
    //     int digit;
    //     digit = num%10;
    //     product *= digit;
    //     num = num/10;
    // }
    
    // sum==product?printf("Spy number"):printf("Not a spy number");





    // if(num1>num2){
    //     for(int i=num1;i>0;i--){
    //         if(num1%i==0 && num2%i==0){
    //             printf("HCF %d ",i);
    //             break;
    //         }
    //     }
    // }else{
    //     for(int i=num2;i>0;i--){
    //         if(num1%i==0 && num2%i==0){
    //             printf("HCF %d ",i);
    //             break;
    //         }
    //     }
    // }

    

}
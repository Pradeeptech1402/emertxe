#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);



    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(j==i||(j+i)==num-1){
                printf("*");
            }else{
                printf("_");
            }
        }
        printf("\n");
    }

    // for(int i=0; i<num;i++){
    //     for(int j=num-i;j>0;j--){
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }
    // int diff=num%2+1;
    // //Peramid
    // for(int i=1;i<num;i++){
    //     if(i!=diff){
    //         printf("*");
    //         for(int j=1;j<num-2;j++){
    //             printf(" ");
    //         }
    //         printf("*");
    //         printf("\n");
    //     }else{
    //         for(int j=1;j<num-2;j++){
    //             printf("*");
    //         }
    //         printf("\n");
    //     }

    // }


    //Right angle trinangle
    // for(int i=1;i<=num;i++){
    //     for(int j=1;j<=i;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }



    // int num;
    // printf("enter number: ");
    // scanf("%d",&num);

    // for(int i=1;i<=10;i++){
    //     printf("%d * %d = %d\n",num,i,num*i);
    // }



    // int first=0;
    // int diffrence=0;
    // int numbers=0;
    // printf("Enter first_number,diffrence,N_numbers: ");
    // scanf("%d %d %d",&first,&diffrence,&numbers);
    // int sum=first;
    // for(int i=0;i<numbers;i++){
    //     printf("%d ",sum);
    //     sum += diffrence;
    // }
    


    // int num1=0;
    // int num2=0;
    // int sum=0;
    // printf("Enter two numbers: ");
    // scanf("%d %d",&num1,&num2);
    // for(int i=1;i<=num1;i++){
    //     sum += num2;
    // }
    // printf("total sum :%d",sum);




    // int base=1;
    // int exponent=1;
    // int value=1;
    // printf("Enter the base value: ");
    // scanf("%d",&base);
    // printf("\nEnter teh exponential value: ");
    // scanf("%d",&exponent);
    // for(int i=0;i<=exponent;i++){
    //     printf("%d ",value);
    //     value *= base;
    // }
}
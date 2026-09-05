#include<stdio.h>
int main(){
    int num1;
    int num2;
    printf("Enter two numbers: ");
    scanf("%d %d",num1,num2);
    printf("%d %d",num1,num2);

    for(int i=1;i<num1;i++){
        if(num1%i==0){
            printf("%d",i);
        }else{
            printf("df");
        }
    }




//     int num1;
//     int sum=0;
//     printf("Enter the number ");
//     scanf("%d",&num);
//     for(int i=1; i<=num; i++){
//         if(num%i == 0){
//             sum += i;
//         }
//     }
// if(sum/2==num){
//     printf("Perfect Number");
// }else{
//     printf("Not Perfect number");
// }

    // printf("%d",sum);

    // printf("%d",count);
    // if(count==2){
    //     printf("Prime");
    // }else{
    //     printf("Not Prime");
    // }




    // int num;
    // printf("Enter the value of n ");
    // scanf("%d",&num);
    // for(int i=1; i<=num; i++){
    //     if(i%2 == 0){
    //         printf("%d ",i);
    //     }
    // }







    // int a=10;
    // int b=10;
    // int equal = a-b;

    // if(equal){
    //     printf("Not equal");
    // }else{
    //     printf("equal");
    // }








    // int marks;
    // printf("Enter the marks: ");
    // scanf("%d",&marks);

    // switch(marks){
    //     case 90 ... 100:
    //     printf("A");
    //     break;
    //     case 80 ... 89:
    //     printf("B");
    //     break;
    //     case 70 ... 79:
    //     printf("C");
    //     break;
    //     case 0 ... 35:
    //     printf("F");
    //     break;
    // }
}
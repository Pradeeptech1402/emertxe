#include<stdio.h>
int is_prime(int); //Declration
int main(){
    int limit;
    printf("Enter two Limit: ");
    scanf("%d",&limit);
    for(int i=2;i<=limit;i++){
        if(is_prime(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
// Function Defination
int is_prime(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}


// #include<stdio.h>
// int add_numbers(int,int); //Declration
// int main(){
//     int sum;
//     sum=add_numbers(15,5);//Function Call
//     printf("Sum: %d",sum);
// }
// // Function Defination
// int add_numbers(int x, int y){
//     int sum = x+y;
//     return sum;
// }
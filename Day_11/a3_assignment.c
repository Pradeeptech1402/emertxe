#include<stdio.h>
int main(){
int num ;
printf("Enter the number: ");
scanf("%d",&num);
if(num<0){
    printf("Invalid Input, Enter only positive number");
}
int sum = 0;
for(int i=1; i<num; i++){
    if(num%i == 0){
        sum += i;
    }
}
if(sum == num){
    printf("Yes, entered number is perfect number\n");
}else{
    printf("No, entered number is not a perfect number\n");
}
}
// {
// // sum the input until output will become single digit. Qualcom program
// }

// int sum=0;

// while(num>0){
// int digit;
// digit = num%10;
// sum += digit;
// num=num/10;}
// printf("%d\n",sum);
// }
// num = sum;
// while(sum>0){
//     int digit = num%10;

// }
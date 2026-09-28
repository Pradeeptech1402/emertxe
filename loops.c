#include<stdio.h>
int main(){
    int num = 100;
    int value=0;
    int index=0;
    while(value < num){
        index++;
        value= index*index;
    }
    if(value!=num)index--;
    printf("%d ",index);
    // int sum=0;
    // do{
    // sum=0;
    //     while(num != 0){
    //     int digit = num%10;
    //     sum += digit;
    //     num /= 10 ;
    // }
    // num=sum;
    // }while(num > 9);
    // printf("%d ",sum);
}
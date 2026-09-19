// WAP to Read an array from user and print them using loop
#include<stdio.h>
int main(){
    int arr[5];
    printf("-----Enter values for array-----");
    for(int i=1;i<=5;i++){
        printf("\nEnter value %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Array Elements are: ");
    for(int i=1;i<=5;i++){
        printf("%d ",arr[i]);
    }
}
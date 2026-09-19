// WAP to find sum and avetage of array elements
#include<stdio.h>
int main(){
    int size,sum;
    printf("--WAP to find sum and avetage of array elements---\n");
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the values for array");
    for(int i=1;i<=size;i++){
        printf("\nEnter the array value %d ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=size;i++){
        sum += arr[i];
    }
    printf("\nSum: %d",sum);
    printf("\nAverage: %f",(float)sum/size);
}
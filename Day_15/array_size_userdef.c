// WAP to Illustrate creation of User defined Array size
#include<stdio.h>
int main(){
    int variable_size;
    printf("Enter the size of array: ");
    scanf("%d",&variable_size);
    
    int arr[variable_size];
    printf("---Enter the values for array---");
    for(int i=1;i<=variable_size;i++){
        printf("\nEnter array value %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nArray Elements are: ");
    for(int i=1;i<=variable_size;i++){
        printf("%d 5",arr[i]);
    }
    
}
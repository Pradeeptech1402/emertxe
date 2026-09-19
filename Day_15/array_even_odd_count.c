#include<stdio.h>
int main(){
    // Create an arr1 of user defined size
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);
    int arr1[size];
    
    // Read array elements and store in arr1
    printf("Enter array elements: ");
    for(int i=0; i<size ; i++){
        scanf("%d",&arr1[i]);
    }
    
    // create arr2 of the same size as arr1
    int arr2[size];
    
    // copy the element of arr1 into arr2
    for(int i=0; i<size; i++){
        arr2[i]=arr1[i];
    }
    // Print arr1 and arr2
    printf("\nArray1 elements: ");
    for(int i=0; i<size;i++){
        printf("%d ",arr1[i]);
    }
     printf("\nArray2 elements: ");
    for(int i=0; i<size;i++){
        printf("%d ",arr2[i]);
    }
}
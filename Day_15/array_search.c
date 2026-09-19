#include<stdio.h>
int main(){
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int element;
    printf("Enter the element to search: ");
    scanf("%d",&element);
    
    for(int i=0 ; i<size; i++){
        if(arr[i]==element){
            printf("Element Found");
            return 0;
        }
    }
    
    printf("Not Found");
}
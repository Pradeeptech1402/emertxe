#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of  array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the values for array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int smallest=arr[0];
    int smallest_index=0;
    int smallest_value_index=0;
    for(int i=smallest_index;i<size;i++){
        if(arr[i]>smallest){
            smallest=arr[i];
            smallest_value_index=i;
            smallest_index++;
        }
        
    }



    
    // int size;
    // printf("Enter the size of  array: ");
    // scanf("%d",&size);
    // int arr[size];
    // printf("\nEnter the values for array: ");
    // for(int i=0;i<size;i++){
    //     scanf("%d",&arr[i]);
    // }
    // int element;
    // printf("\nEnter the element: ");
    // scanf("%d",&element);
    // int is_found=0;
    // for(int i=0;i<size;i++){
    //     if(arr[i]==element){
    //         is_found=1;
    //     }
    // }
    // if(is_found==1){
    //     printf("Found");
    //     }else{printf("Not found");}


    // int size1,size2;
    // printf("Enter the size of first array: ");
    // scanf("%d",&size1);
    // int arr1[size1];
    // printf("\nEnter the values for array: ");
    // for(int i=0;i<size1;i++){
    //     scanf("%d",&arr1[i]);
    // }

    // printf("Enter the size of second array: ");
    // scanf("%d",&size2);
    // int arr2[size2];
    // printf("\nEnter the values for array: ");
    // for(int i=0;i<size2;i++){
    //     scanf("%d",&arr2[i]);
    // }
    // for(int i=0;i<size2;i++){
    //     arr1[i+size1]=arr2[i];
        
    // }
    // for(int i=0;i<size1+size2;i++){
    //     printf("%d ",arr1[i]);
    // }
    
    }


    // int size;
    // printf("Enter the size of array: ");
    // scanf("%d",&size);
    // int arr[size];
    // printf("\nEnter the values for array: ");
    // for(int i=0;i<size;i++){
    //     scanf("%d",&arr[i]);
    // }
    
    // for(int i=0;i<size;i++){
    //     int count=0;
    //     for(int j=0;j<size;j++){
    //         if(j<i){
    //             if(arr[i]==arr[j]){
    //             break;
    //             }
    //             if(arr[i]==arr[j]){
    //             count++;}
    //         }
    //     }
    //     if(count != 0){
    //     printf("%d--%d\n",arr[i],count);}
        
    // }

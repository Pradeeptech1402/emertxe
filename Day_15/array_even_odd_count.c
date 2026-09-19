#include<stdio.h>
int main(){
    // Create array form user
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements: ");
    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    
    
    // Know the count of Even and Odd elements in array
    // store count for even and odd numbers
    int size_of_even=0, size_of_odd=0;
    for(int i=0 ; i < size; i++){
       arr[i]%2==0?size_of_even++:size_of_odd++;
    }
    // create two arrays to store even and odd elements
    int even_arr[size_of_even], odd_arr[size_of_odd];
    int even_index_count=0, odd_index_count=0;
    
    // check the element is even or odd in array and store it in respective array(even or odd)
    for(int i=0 ; i<size ; i++){
        if(arr[i]%2==0){
            even_arr[even_index_count]=arr[i];
            even_index_count++;
        }else{
            odd_arr[odd_index_count]=arr[i];
            odd_index_count++;
        }
    }
    
    // Print the seperated arrayes
    printf("\nOdd array elements: ");
    for(int i=0; i<size_of_odd; i++){
        printf("%d ",odd_arr[i]);
    }
    printf("\nEven array elements: ");
    for(int i=0; i<size_of_even; i++){
        printf("%d ",even_arr[i]);
    }
}
// Name:Pradeep R
// Date:28/09/2026
// Description:WAP to find 3rd largest element in an array
// Sample input: Enter the size of the Array : 5
//                Enter the elements into the array: 5 1 4 2 8
// Sample output: Third largest element of the array is 4

#include <stdio.h>
int third_largest(int [], int);
int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    printf("Enter the elements into the array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    //funtion call
    ret = third_largest(arr, size);
    
    printf("Third largest element of the array is %d\n", ret);
}
int third_largest(int *arr,int size){
    // First Find the largest and smallest elements in the array
    int first_largest=*arr;
    int smallest=*arr;
    for(int i=0;i<size;i++){
        if(*(arr+i)> first_largest){
            first_largest=*(arr+i);
        }
        if(*(arr+i) < smallest){
            smallest = *(arr+i);
        }
    }
    // The second largest elements is greater than smallest and lesser than largest
    int second_largest = smallest;
    for(int i=0;i<size;i++){
        if(*(arr+i)<first_largest && *(arr+i)>second_largest){
            second_largest=*(arr+i);
        }
    }
    // The third largest elements is greater than smallest and lesser than second largest
    int third_largest=smallest;
    for(int i=0;i<size;i++){
        if(*(arr+i)<second_largest && *(arr+i)>third_largest){
            third_largest=*(arr+i);
        }
    }
    // Return the third_largest elements.
    return third_largest;
   
}
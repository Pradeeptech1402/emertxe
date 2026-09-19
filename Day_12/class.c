#include<stdio.h>
#include<math.h>
int main(){
        int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int array[size];

    for(int i=0; i<size; i++){
        printf("Enter array element %d: ",i);
        scanf("%d",&array[i]);
    }
    printf("Result arrya: ");
    for (int i=0; i<size; i++){
       if(array[i]%2==0){
        array[i] = 0;
       }else{
        array[i]= 1;
       }
       printf("%d ",array[i]);
    }
    int pow=1;
    int sum=0;
    for(int i=size-1; i>=0;i--){
        sum = sum +(array[i]*pow);
        pow = pow * 2;
        }
        printf("\n Sum: %d",sum);
    

    
    



    // int size;
    // printf("Enter the size of the array: ");
    // scanf("%d",&size);

    // int array[size];

    // for(int i=0; i<size; i++){
    //     printf("Enter array element %d: ",i);
    //     scanf("%d",&array[i]);
    // }
    // int sum = 0;
    // int max=array[0];
    // int min=array[0];
    // float average;
    // for (int i=0; i<size; i++){
    //     sum += array[i];
    //     if(array[i]>max){
    //         max=array[i];
    //     }
    //     if(array[i]<min){
    //         min=array[i];
    //     }
    // }
    // average = (float)sum/size;
    // printf("Sum of the array is %d \n",sum);
    // printf("Average of the array is %f \n",average);
    // printf("Max of the array is %d \n",max);
    // printf("Min of the array is %d \n",min);


}
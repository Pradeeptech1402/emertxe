#include<stdio.h>
void square_array_elemnet(int size,int* ptr){
   printf("Square of array elements are: ");
    for(int i=0;i<size;i++){
        ptr[i]=ptr[i]*ptr[i];
    }
}
int main(){
    int size;
    printf("Enter teh size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements : ");
    for(int i=0; i<size;i++){
        scanf("%d",arr+i);
    }
    square_array_elemnet(size,arr);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
        int found=0;
        for(int j=1;j<=size;j++){
            if(arr[i]==j){
                found=1;
                break;
            }
        }
        if(found==0){
            printf("%d ",i);
        }
    }
}




// #include<stdio.h>
// int main(){
//     int size;
//     printf("Enter teh size of array : ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("Enter the array elements : ");
//     for(int i=0; i<size;i++){
//         scanf("%d",arr+i);
//     }
//     printf("Array elements are: ");
//     for(int i=0;i<size;i++){
//         printf("%d ",*(arr+i));
//     }
// }



// #include<stdio.h>
// int main(){
//     int arr[5] = {10,20,30,40,50};
//     for(int i=0;i<5;i++){
//         printf("%d ",*(arr+i));
//     }
// }



// #include<stdio.h>
// int main(){
// int var = 5;
// printf("Value of var before modify: %d",var);
// int* pvar;
// pvar = &var;
// *pvar += 15;
// printf("\nValue of var after modify : %d",var);
// printf("\nAddress of var using var : %p",&var);
// printf("\nAddress of pvar using pvar : %p",&pvar);
// printf("\nAddress of var using pvar : %p",pvar);
// printf("\n Value of var using pvar : %d",*pvar);
// }
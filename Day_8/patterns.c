#include<stdio.h>
int main(){
    int input=0;
    // printf("Enter n: \n");
    scanf("%d",&input);
    
    for(int i=1;i<=input;i++){
        for(int j=input-i;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for(int l=0;l<i-1;l++){
            printf("*");
        }
        printf("\n");
    }
}
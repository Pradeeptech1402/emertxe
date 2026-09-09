#include<stdio.h>
int main(){
    int input;
    // printf("Enter n value: ");
    scanf("%d",&input);
    
    for(int i=0;i<input;i++){
        for(int j=1;j<input-i;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        
        printf("\n");
    }
    input -= 1;
    for(int i=0;i<input;i++){
        for(int j=0;j<=i;j++){
            printf(" ");
        }
        for(int j=1;j<=input-i;j++){
            printf("*");
        }
        for(int j=1;j<input-i;j++){
            printf("*");
        }
        
        printf("\n");
    }
}
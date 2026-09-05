#include<stdio.h>
int main(){
    char value='A';
    int input=0;
    // printf("Enter the number: ");
    scanf("%d",&input);
    
    for(int i=1;i<=input;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",value);
            value += 1;
        }
        printf("\n");
    }
}
#include<stdio.h>
int main(){
    int input;
    int variable=1;
    printf("Enter teh number: ");
    scanf("%d",&input);
    
    for(int i=1;i<=input;i++){
        for(int j=1; j<=i;j++){
            printf("%d ",variable);
            variable += 1;
        }
        printf("\n");
    }
}
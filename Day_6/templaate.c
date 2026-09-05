#include<stdio.h>
int main(){
    int input;
    int value=1;
    printf("Enter the number: ");
    scanf("%d",&input);
    
    if(input>0){
        for(int i=1;i<=input;i++){
            printf("%d ",value);
            value = value*2;
    }
    }else{
        printf("Error: Number should be an positive number.");
    }
}
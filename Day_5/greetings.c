#include<stdio.h>
int main(){
    int input;
    printf("Enter the hour (0-23): ");
    scanf("%d",&input);
    
    if(input>=5 && input<=11){
        printf("Good morning!");
    }
    else if(input>=12 && input<=15){
        printf("Good afternoon!");
    }
    else if(input>=16 && input<=21){
        printf("Good evening!");
    }
    else if((input>=22 && input<=23) || (input <= 4)){
        printf("Good night!");
    }
    else{
        printf("Invalid hour!");
    }
}
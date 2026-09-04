#include<stdio.h>
int main(){
    char input;
    printf("Enter direction: ");
    scanf("%c",&input);
   
    
    switch(input){
        case 'N':
        case 'n':
            printf("North");
            break;
        case 'S':
        case 's':
            printf("South");
            break;
        case 'e':
        case 'E':
            printf("East");
            break;
        case 'W':
        case 'w':
            printf("West");
            break;
        default:
            printf("Invalid input");
            break;
    }
}
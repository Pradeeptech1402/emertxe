#include<stdio.h>
int main(){
    char input;
    printf("Enter the number:\n");
    scanf("%c",&input);
    
    switch(input){
        case 'A'...'Z':
        printf("Character is Uppercase");
        break;
        case 'a'...'z':
        printf("Character is Lowercase");
        break;
        case '0'...'9':
        printf("Character is a digit");
        break;
        default:printf("Not an alphabet or digit");
        break;
        }
}
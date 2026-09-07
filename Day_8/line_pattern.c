#include<stdio.h>
int main(){
    int total_char=0;
    int middle_char=0;
    // printf("Enter n: ");
    scanf("%d",&total_char);
    // printf("Enter m: ");
    scanf("%d",&middle_char);
    int diffrence = (total_char-middle_char)/2;
    if(total_char%2==0||middle_char%2==0||middle_char>=total_char){
        printf("n and m should be odd and n should be greater than m");
    }else{
        for(int j=1;j<=diffrence;j++){
            printf("$");
        };
        for(int k=1;k<=middle_char;k++){
            printf("*");
        };
        for(int l=1;l<=diffrence;l++){
            printf("$");
        };
    };
    return 0;
}
#include<stdio.h>
int main() {
    int x=121;
    int x_cp=x;
    int reversed=0;
    while(x>0){
        int digit = x%10;
        reversed=(reversed*10)+digit;
        x=x/10;
    }
    if(x_cp==reversed){
        printf("true");
    }else{
        printf("false");
    }
}
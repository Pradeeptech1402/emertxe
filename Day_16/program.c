#include<stdio.h>
int main(){
    int num = 0x12345678;
    char* ptr = (char*)&num;
    if(*ptr == 78){
        printf("Little endian\n");
    }else{
        printf("Big endian\n");
    }
    return 0;
}
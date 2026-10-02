#include<stdio.h>
#include<unistd.h>
int num;
int function_1();
int function_2();
int main(){
  while(1){
    num++;
    function_1();
    sleep(1);
    function_2();
    sleep(1);
  }
  return 0;
}
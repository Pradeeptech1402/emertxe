// Name:Pradeep R
// Date:24/09/2026
// Description:WAP to implement your own ispunct() functio
// Sample input1: Enter the character: a
// Sample output1: Entered character is not punctuation character
// Sample input2: Enter the character: $
// Sample output2: Entered character is punctuation character
#include <stdio.h>
int my_ispunct(int);
int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_ispunct(ch);
    
    if(ret){
        printf("Entered character is punctuation character");
    }else{
        printf("Entered character is not punctuation character");
    }
}
int my_ispunct(int ch){
    if(ch != ' ' && !((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))){
        return 1;
    }else{
        return 0;
    }
}
/*Task 2: ASCII Value Inspector

Goal: Understand the direct relationship between char and integer ASCII codes.

Requirements:

Declare a variable ch of type char.

Prompt the user to enter a single character.

Print the character itself using %c, and print its underlying ASCII numeric value on the next line using %d. */

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    printf("Character is: %c\nNumeric Value: %d", ch,ch);
    return 0;
}

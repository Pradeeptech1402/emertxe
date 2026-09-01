#include <stdio.h>

int main(){
    int age;
    float height;
    char grade;

    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&height);
    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Age: %d\nHeight: %.2f\nGrade: %c", age, height, grade);
    return 0;
}

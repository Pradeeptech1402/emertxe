#include<stdio.h>
int main(){

    int time;
    printf("Enter the time");
    scanf("%d",&time);

    if(time>=5 && time <=11){
        printf("Good morning");
    }
    else if(time>=12 && time <=15){
        printf("Good afternoon");
    }
    else if(time>=16 && time <=21){
        printf("Good evening");
    }
    else if(time>=22 || time <=4){
        printf("Good night");
    }else if(time>23){
        printf("Invalid");
    }


    // int n1 , n2, n3, mid;
    // printf("Enter 3 Numbers: ");
    // scanf("%d %d %d",&n1,&n2,n3);

    // if(n1<n3 && n1>n2){
        
    // }




    // printf("t\t\t\t:::WELCOME TO THILAND MASSAGE PARLOUR:::\n");
    // printf("1. THAI MASSAGE -> 2500\n");
    // printf("2 Tuk massage: 1500\n");
    // printf("3 Head Massage: 500\n");
    // printf("4 Body massage 3500\n");

    // printf("Please select option");
    // int option, total, minor,major;
    // scanf("%d",&option);

    // if (option ==1){
    //     printf("How many people are there: ");
    //     scanf("%d",&total);
    //     printf("People bllow 18: ");
    //     scanf("%d",&minor);
    //     major = total - minor;
    //     float bill = (2500*major)+((2500*0.5)*minor);
    //     printf("%f", bill);
    // }

    // char input;
    // printf("Enter the amount: ");
    // scanf("%c",&input);

    // if(input)



    // if(input >= 'A' && input <= 'Z'){
    //     printf("Upper Case");
    // }else if(input >= 'a' && input <= 'z'){
    //     printf("lower case");
    // }else if(input <= '0' && input <= '9'){
    //     printf("Digit");
    // }else {
    //     printf("special charactor");
    // }

    // if(input >= 90){
    //     printf("A");
    // }else if(input>75 && input<89){
    //     printf("B");
    // }
    // else if(input>60 && input<74){
    //     printf("C");
    // }
    // else if(input>35 && input<59){
    //     printf("D");
    // }
    // else if(input>35){
    //     printf("F");
    // }else{
    //     printf("invalid input");
    // }
}
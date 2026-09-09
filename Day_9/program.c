#include<stdio.h>
int main(){
    int num;
    printf("Enter the value for num: ");
    scanf("%d",&num);
    int cp_num =num;
    int reversed=0;
    while(num>0){
        int digit = num%10;
        reversed = reversed*10+digit;
        num = num/10;
    }
    printf("Reversed %d",reversed);

    if(reversed==cp_num){
        printf("\nPalendrome ");
    }else{
        printf("\nnot a palendrome ");
    }


    // int num;
    // printf("Enter the value for num: ");
    // scanf("%d",&num);
    // int cp_num =num;
    // int count=0;
    // while(num>0){
    //     int digit = num%10;
    //     if(cp_num%digit==0){
    //         count++;
    //     }
    //     num = num/10;
    // }
    // printf("answer %d",count);

    // int product=1;
    // int sum=0;
    // while(n>0){
    //     int digit = n%10;
    //     product *= digit;
    //     sum +=digit;
    //     n=n/10;
    // }
    // printf("Product=%d",product-sum);
    





    // int num;
    // printf("Enter the num ");
    // scanf("%d",&num);
    // int sum=0;
    // int cp_num=num;
    // while(num>0){
    //     int digit = num%10;
    //     sum += digit;
    //     num=num/10;
    // }
    // printf("Sum of digits for %d is %d\n",cp_num,sum);


    // for(int i=1;i<=limit;i++){
    //     int count=0;
    //     for(int j=1;j<=i;j++){
    //         if(i%j==0){
    //             count++;
    //         }
    //     }
    //     if(count==2){
    //         printf("%d ",i);
    //     }
    // }



    // for(int i=1;i<=num;i++){
    //     int start=i;
    //     int cd =num;
    //     for(int j=1;j<=(num-i+1);j++){
    //          printf("%d ",start);
    //          start += cd;
    //          cd--;
    //     }
    //     printf("\n");
    // }
}
#include<stdio.h>
int main(){
    float ticket_price = 100.00;
    int customer_age;
    
    printf("Enter the Age: ");
    scanf("%d",&customer_age);
    
    if(customer_age<5){
        ticket_price = ticket_price*0;
        printf("Children under 5 years old get in free!\nTicket price: Rs. %.2f",ticket_price);
        
    }else if(customer_age>=5 && customer_age<=12){
        ticket_price = ticket_price*0.5;
        printf("Ticket price: Rs. %.2f",ticket_price);
    }else if(customer_age>=65){
        ticket_price = ticket_price*0.8;
        printf("Ticket price: Rs. %.2f",ticket_price);
    }else{
        printf("Ticket price: Rs. %.2f",ticket_price);
    }
}
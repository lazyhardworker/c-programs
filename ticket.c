#include <stdio.h>

int calculateTicketPricing(int tickets){
    int cost=0, convenienceFee = 0.05;
    if(tickets<=3){
        cost = tickets * 450;
    }else if(tickets<= 5){
        cost = (3 *450) + (tickets - 3) *350;
    }else{
        cost = (3 *450) + (2 *350) + (tickets - 5) *250;
    }
    cost += cost * convenienceFee;
    printf("Total Cost with Convienience Fee: %d\n", cost);
}

int main(){
    int tickets;
    printf("Enter number of tickets: ");
    scanf("%d", &tickets);
    calculateTicketPricing(tickets); 
}
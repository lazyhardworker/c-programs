#include <stdio.h>

int calculateWaterBill(float units){
   int bill=0, surCharge= 0.15;
   if(units<=30){
        bill = units * 2;
   }else if(units<=80){
        bill = (30 * 2)+ ((units -30)*3);
   }else{
        bill = (30 * 2) + ( 80 * 3) + ((units - 80)*5);
   }
   bill = bill + (bill * surCharge);
    printf("Total water bill is: %d\n", bill);
}
int main(){
    float units;
    printf("Enter water units consumed: ");
    scanf("%f", &units);
    calculateWaterBill(units); 
}
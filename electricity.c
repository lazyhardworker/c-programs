#include <stdio.h>

float calculateElectricityBill(float units){
    float bill=0, surCharge=0.20;
    if(units <= 50){
        bill = units * 0.50;
    }else if(units <= 150){
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    }else if(units <=250){
        bill = (50 *0.50) + (100 * 0.75) + ((units -150) *1.20);
    }else{
        bill = (50 * 0.50) + (100 * 0.75) + ( 100 * 1.20) + ( (units - 250) * 1.50);
    }
    bill += bill * surCharge;
    printf("Total Electricity Bill: $%.2f\n", bill);
}
int main(){
    float units;
    printf("Enter the number of electricity units consumed: ");
    scanf("%f", &units);
    calculateElectricityBill(units);
}
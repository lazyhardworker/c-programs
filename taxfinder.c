#include <stdio.h>

float taxFinder(float income){
    float tax;

  if(income <= 250000){
        printf("No tax\n");
        return 0;
    }else if(income<= 500000){
        tax = 0.05*(income - 250000);
    }else if(income <= 1000000){
        tax = 0.2*(income - 500000) + 12500;
    }else{
        tax = 0.3*(income - 1000000) + 112500;
    }
    printf("Your tax is: %.2f\n", tax);
    return tax;
}

int main(){
    float income;
    printf("Enter your income: ");
    scanf("%f", &income);
    taxFinder(income);
    return 0;
}
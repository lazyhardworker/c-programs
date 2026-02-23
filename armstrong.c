#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num;
    int digits = 0;
    int sum = 0;
    int rem;

    // Count the number of digits
    int temp = num;
    while(temp != 0){
        digits++;
        temp /= 10;
    }
    // Calculate Armstrong sum
    temp = num;
    while(temp != 0){
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    //check condition
    if(sum == original)
        return 1;
    else
        return 0;
}
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}
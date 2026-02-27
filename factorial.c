#include <stdio.h>
int factorial(int num){
    int count,fact=1;
    for(count=1; count<=num; count++){
        fact = fact*count;    
    }
    printf("Factorial of num %d is %d", num, fact);

}
int main(){
    int a;
    printf("Enter Number for Factorial: ");
    scanf("%d", &a);
    factorial(a);
}
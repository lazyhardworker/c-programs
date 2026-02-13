#include <stdio.h>
#include <math.h>
void areaTriangle(int a, int b, int c){
    if(a + b <= c || a + c <= b || b + c <= a){
        printf("Invalid triangle sides.\n");
        return;
    }
    float s = (a + b + c) / 2.0;
    float area= sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of triangle is: %.2f\n", area);
}
int main() {
    int a, b, c;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    areaTriangle(a, b, c);
    return 0;
}
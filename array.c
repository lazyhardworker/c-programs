#include <stdio.h>
int main(){
    int marks[3];
    int i;
    for(i=0; i<=2; i++)
    {
        printf("\n Enter mark for number %d:", i);
        scanf("%d", &marks[i]);
    }
    return 0;
}
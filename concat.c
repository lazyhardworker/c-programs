#include <stdio.h>
#include <string.h>
int main(){
    char string1[100] = {"Nepal"};
    char string2[20] = {" Country"};
    strcat(string1, string2);
    printf("%s", string1);
    return 0;
}
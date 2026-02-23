#include <stdio.h>
#include <string.h>

int main(){
    char str1[100],str2[100];
    int i = 0; int flag = 0;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    //compare characters until they differ or one ends 
    while(str1[i] != '\0' && str2[i] != '\0'){
        if(str1[i] != str2[i]){
            flag = 1;
            break;
        }
        i++;
    }
    if (flag ==0 && str1[i] == '\0' && str2[i] == '\0'){
        printf("The strings are equal.\n");
    } else if (str1[i] < str2[i] || (str1[i] != '\0' && str2[i] == '\0')){
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }
}
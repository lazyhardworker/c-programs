#include <stdio.h>
int main(){
    char myArr[100]= {"I am Bro"};
    int i=0, count=0, inWord=0;
    char ch;
    while((ch =getchar()) != '\n' && i<99){
        if(ch ==' ' && inWord == 0){
            count++;
            inWord = 1;
        }else if(ch == ' '){
            inWord = 0;
        }
        
    }
    myArr[i]='\0';
    printf("%s\n", myArr);
    printf("Number of words:%d\n", count);
    return 0;
}
// WAP to find if a character enter by user is upper case or not
#include<stdio.h>
int main(){
    char ch;
    printf("Enter any Character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("%c is Upper case",ch);
    }else{
        printf("%c is Lower case",ch);
    }
    return 0;
}
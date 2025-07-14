// find cheracter is upper case or lower case
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("upper case");
    }else if (ch>='a'&& ch<='z'){
        printf("lower case");
    }else{
        printf("You not enter a alphabet");
    }
    return 0;

}
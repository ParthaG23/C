// Take a string input from user input from user using "%c"
#include<stdio.h>
int main(){
    char str[100];
    char sentance;
    int i=0;
    printf("input:\n");
    while(sentance!='\n'){
        scanf("%c",&sentance);
        str[i]=sentance;
        
        i++;
    }
    str[i]='\0';
    printf("......................\nYour input sentance is ...................\n");
    puts(str);
    return 0;
}

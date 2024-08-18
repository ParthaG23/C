// Ask  user to enter a sentence and back them
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter any sentence:\n");
    fgets(str,100,stdin);
    printf("Your entered sentence.........\n");
    puts(str);
    return 0;
}
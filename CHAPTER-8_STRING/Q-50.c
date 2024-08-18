// Make a program that input user name & print its length
#include<stdio.h>

int countLength(char arr[]);

int main(){
    char name[100];
    printf("Enter your name:\n");
    fgets(name,100,stdin);
    printf("Length of the your given name:%d",countLength(name));
    return 0;
}
int countLength(char arr[]){
    int count=0;
    for (int i=0;arr[i]!='\0';i++){
        count++;

    }
    return count-1;
}
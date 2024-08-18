// strcpy(new str,old str): Copies value of old  string to new string
#include<stdio.h>
#include<string.h>

int main(){
    char oldName[]="PARTHA";
    char newName[]="GAYEN";

    strcpy(newName,oldName);
    puts(newName);
    return 0;


}
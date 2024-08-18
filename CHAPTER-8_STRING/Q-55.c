// Check if a given  charecter is present in a string  or not
#include<stdio.h>
#include<string.h>
void checkChar(char str[],char ch);
int main(){
    char str[200];
    printf("Enter your string:\n");
    fgets(str,200,stdin);
    char ch;
    printf("Enter the checking charecter :");
    scanf("%c",&ch);
    // call the function
    checkChar(str ,ch);
    return 0;


}
void checkChar(char str[],char ch){
    int j;
    for (int i =0;str[i]!='\0';i++){
        if (str[i]==ch){
            printf("The charecter is present \n");
            return ;
        }
   
        }
            printf("Sorry! Charecter is not present");
    }

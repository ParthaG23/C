// Find the salted form of password enter by user if the salts is "123 & add at the end 
#include<stdio.h>
#include<string.h>
void salting(char passwors[]);
int main(){
    char password[100];
    printf("Enter your passWord:");
    scanf("%s",&password);
    salting(password);//call the function
    return 0;
}
//function defination
void salting(char password[]){
    char salt[]="123";
    char newPassword[200];
    strcpy(newPassword,password);
    strcat(newPassword,salt);
    printf("After salting your password:\n");
    puts(newPassword);
}
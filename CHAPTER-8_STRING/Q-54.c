//WRF to count the occurrence of vowels in a string;
#include<stdio.h>
#include<string.h>
int countVowels(char str[]);
int main(){
    char str[200];
    printf("Enter your string:\n");
    fgets(str,200,stdin);
   
    printf("Number of vowels present your given input: %d ", countVowels(str));
}
int countVowels(char str[]){
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        } 
    }
    return count;
}
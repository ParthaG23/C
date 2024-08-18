// Write a function named slice which takes a string & returns a slice string from index n to m
#include<stdio.h>
#include<string.h>
void slice(char str[],int m ,int n);
int main(){
    char str[200];
     int m,n;
    printf("Enter your string:\n");
    fgets(str,200,stdin);
    printf("Enter starting sliceing index:");
    scanf("%d",&m);
    printf("Enter ending sliceing index:");
    scanf("%d",&n);
    slice(str,m,n);
    return 0;
}
void slice(char str[],int m ,int n){
    char newStr[200];
    int j=0;
    for (int i=m;i<=n;i++,j++){
        newStr[j]=str[i];
    }
    newStr[j]='\0';
    printf("your slice string:\n");
    puts(newStr);
}
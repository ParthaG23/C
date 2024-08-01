// Write a function that print Namaste if user is indian Bonjour if the user is farench
#include<stdio.h>
// function prototype
void Namaste();
void Bonjour();

int main(){
    char ch;
    printf("Where are you from india(i) or farench(f):");
    scanf("%c",&ch);
    if(ch =='i'){
        Namaste(); 
    }else{
        Bonjour();
    }
    return 0;

}
void Namaste(){
    printf("Namaste !");
}
void Bonjour(){
    printf("Bonjour !");
}
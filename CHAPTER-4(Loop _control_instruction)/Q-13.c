// print character a to z
#include<stdio.h>
int main(){
    printf("Upper case.............\n");
    for(int i='A';i<='Z';i++){
        printf("%c    ",i);
    }
    printf("\nLower case.............\n");
    for(int i='a';i<='z';i++){
        printf("%c    ",i);
    }
    return 0;
}
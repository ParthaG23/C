// print all odd number for 5 to 50
#include<stdio.h>
int main(){
    int i;
    for(i=5;i<=50;i++){
        if(i%2!=0){
             printf("%d\t",i);
        }
       
    }
    return 0;
}
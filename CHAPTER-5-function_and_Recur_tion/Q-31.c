// print "Hello world " 5 time use recursion
#include<stdio.h>
void printHW(int count);
int main(){
int num;
printf("How many time you print:");
scanf("%d",&num);
printHW(num);
return 0;


}
void printHW(int count){
    if(count==0){
        return ;
    }
    printf("Hello world\n");
    printHW(count-1);
}
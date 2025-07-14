// check a student pass or fail  fass markas >30 fail<=30
#include<stdio.h>
int main(){
    int marks;
    printf("Check you are pass or fail:");
    scanf("%d",&marks);
    if (marks<=30 ){
        printf("Fail");
    }else{
        printf("Pass");
    }
    return 0;
}
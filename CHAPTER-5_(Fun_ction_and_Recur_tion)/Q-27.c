// print a table use to function
#include<stdio.h>
void table(int x);
int main(){
    int n;
    printf("Which table is requere:");
    scanf("%d",&n);
    table(n);
    return 0;

}
void table(int x){
    printf("The table is........\n");
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",x,i,i*x);
    }
}
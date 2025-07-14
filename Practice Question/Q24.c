// calculating the sum of all num b/w 5 to 50(including 5 and 50)
#include<stdio.h>
int main(){
    int i;
    int sum=0;
    for(i=5;i<=50;i++){   
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
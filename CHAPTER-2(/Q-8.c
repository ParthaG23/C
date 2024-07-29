//Q-8... print 1(true) or 0(false) for folloing
// a.If its sunday and its snowing-->true
#include<stdio.h>
int main(){
    int isSunday=1;
    int isSnowing=1;
    printf("%d(Output for a)\n",isSunday && isSnowing);
  


// b...If its Monday or its raining-->true

    int isMonday=0;
    int isRaining=1;
    printf("%d(Output for b)\n",isMonday || isRaining);

// c....If a Number is greater than 9 and less than 100
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("%d(Output for c)\n",a>9 && a<100);
    return 0;

}
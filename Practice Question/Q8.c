// print 1(true) or 0 (false) for the following state ment

// a. it is sunday and it is snowing

// #include<stdio.h>
// int main(){
//     int isSunday=1;
//     int isSnowing=1;
//     printf("%d",isSunday && isSnowing);
//     return 0;
// }





// b. if it may monday or not bot it is raning . output is 1
// #include<stdio.h>
// int main(){
//     int isMonday=0;
//     int isRaning=1;
//     printf("%d",isMonday || isRaning);
//     return 0;
// }


// c. check a number is grater than 9 and lass than 20
#include<stdio.h>
int main(){
    int num;
    printf("Enter a nmber :");
    scanf("%d",&num);
    printf("%d",9<num && num<20 );
    return 0;
}
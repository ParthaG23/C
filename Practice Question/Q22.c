// find factorial of a number 
#include<stdio.h>
int main() {
    int i, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int fact=1;
    for (i = 1; i <=num; i++) {
      fact= fact*i;

    }
      printf("%d  = %d\n", num,fact );
    return 0;
}
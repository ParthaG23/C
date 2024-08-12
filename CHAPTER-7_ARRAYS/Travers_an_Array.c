// Traverse of an array

// **NOTE**: Use any one case in single time .dont use together 

// case-1: Use pointer 

#include<stdio.h>
int main(){
    int aadhar[5];
    // input
    int *ptr=& aadhar[0];
    for(int i=0;i<5;i++){
        printf("index %d:",i);
        scanf("%d",ptr+i);
    }
    //output 
    printf("Output......\n");
    for (int i=0;i<5;i++){
        printf("index %d =%d\t",i,*(ptr+i));
    }

    return 0;
}

// case-1: without use pointer 
#include<stdio.h>
int main(){
    int aadhar[5];
    // input

    for(int i=0;i<5;i++){
        printf("index %d:",i);
        scanf("%d",&aadhar[i]);
    }
    //output 
    printf("Output......\n");
    for (int i=0;i<5;i++){
        printf("index %d =%d\t",i,aadhar[i]);
    }
    return 0;
}
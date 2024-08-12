/* 
**Syntax**:
            //function deeclearation :
                //Squar bracket form
                void printNumber (int arr[] int n);
                     or
                // Pointer form 
                void printNumber(int *arr int n);
            //Function call
                printNumber(arr,n);
*/


//Case-1:Use Square bracket form:
// #include<stdio.h>
// void printNumber(int arr[],int n);
// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     printNumber(arr,7);
//     return 0;

// }
// void printNumber(int arr[],int n ){

//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");

// }

// case-2:Use pointer form:
#include<stdio.h>
void printNumber(int *arr,int n);
int main(){
    int arr[]={1,2,3,4,5,6,7};
    printNumber(arr,7);
    return 0;

}
void printNumber(int *arr,int n ){

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}
//WAF to reverase  an array

#include<stdio.h>
void printArray(int *arr, int n);
void reverseArray(int arr[],int n);
int main(){
    int n;
    printf("Enter size of the array :");
    scanf("%d",&n);
    int  arr[n];
    // input item and store in the array

    printf("Enter element(number) of the array........\n");
    for(int i=0;i<n;i++){
        printf("Element-%d:",i);
        scanf("%d",&arr[i]);
    }
    // Call the function
    reverseArray(arr,n);
    printArray(arr,n);
    return 0;

}

// display the arry
void printArray(int *arr, int n){
    printf("....................Your given array in reverse order .....................\n");
     for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
     }
     printf("\n");

}
// reverse the array
void reverseArray(int arr[],int n){
   
    for (int i=0;i<n/2;i++){
         int firstValue=arr[i];
        int secondValue=arr[n-i-1];
        arr[i]=secondValue;
        arr[n-i-1]=firstValue;
    }
}
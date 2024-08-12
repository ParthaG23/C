// WAF to count the number of odd number in an array
#include<stdio.h>
int countOdd(int *arr,int n);
void printOdd(int *arr,int n);
int  main() {
    int n;
    
    printf("Enter size of the array :");
    scanf("%d",&n);
    int  arr[n];
    // input item and store in the array

    printf("Enter element(number) of the array........\n");
    for(int i=1;i<=n;i++){
        printf("Element-%d:",i);
        scanf("%d",&arr[i]);
    }
    //print the given arraqy
    printf("....................Your given array .....................\n");
     for(int i=1;i<=n;i++){
        printf("%d\t",i,arr[i]);
     }
     printf("\n");

  //print number of odd number are present
   printf("\nNumber of Odd number are present:%d\n",countOdd(arr,n));

//print odd all odd number
    printf("....................Print Odd number after remove all even number .....................\n");
    printOdd(arr,n);

}
//count number of odd number are present
int countOdd(int *arr,int n){
    int count =0;
    for(int i=1;i<=n;i++){
        if (arr[i]%2!=0){
            count++;
        }
    }
    return count;
}

// print number of odd number are present 
void printOdd(int *arr,int n){
for(int i=1;i<=n;i++){
        if (arr[i]%2!=0){
            printf("%d\t",arr[i]);
        }
    }
    printf("\n");
}
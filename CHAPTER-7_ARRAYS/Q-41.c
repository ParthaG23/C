// Write a program to enter  price n item & print there final cost with gst
#include<stdio.h>
int main(){
    //create a array for storing n number item

    int n;
    
    printf("Enter how many item you are buy:");
    scanf("%d",&n);
    float itemList[n];


    // input item and store in the array

    printf("Enter item price........\n");
    for(int i=1;i<=n;i++){
        printf("Product-%d:",i);
        scanf("%f",&itemList[i]);
    }

    // Calculate GST :
    for(int i=1;i<=n;i++){

        itemList[i]=itemList[i]+(0.18*itemList[i]);
    }
    printf("....................Final price after include 18 parcent gst......................\n");
     for(int i=1;i<=n;i++){
        printf("product %d:%.2f\n",i,itemList[i]);
      
     }
    return 0;
}
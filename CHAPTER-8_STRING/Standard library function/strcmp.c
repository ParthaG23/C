/* 
strcmp(firstStr,secStr):
                        Compare two string and return a value 
                        
                        0-->string equal.
                        positive--> first > second (ASCII);
                        negetive-->first < second (ASCII);
*/
#include<stdio.h>
#include<string.h>

int main(){
    char firstName[]="APPLE";
    char secName[]="BANANA";

    int  compare=strcmp(firstName,secName);
    printf("The result is :%d",compare);
    
    return 0;


}
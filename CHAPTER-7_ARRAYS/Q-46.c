// Create a 2D array ,storing the tables of 2 and 3
#include<stdio.h>
int main(){
    int table[2][10];
    // fill the array with table of 2 & 3
    for(int i=0;i<10;i++){
        table[0][i]=2*(i+1);
        table[1][i]=3*(i+1);
    }
    // print the 2D array
    for(int i=0;i<2;i++){
        for (int j=0;j<10;j++){
            printf("%d\t",table[i][j]);
        }
        printf("\n");
    }
    return 0;
}
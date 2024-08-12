// *****pointer arithmetic: pointer can be inclement and decrement*******

// ***NOTE: Try any "Case " in a single time .Not use all case together 

// case-1:Integer Address increment 

// #include<stdio.h>
// int main(){
//     int age=22;
//     int *ptr=&age;
//     // Address of age before increment
//     printf("Address of age before increment:%u\n",ptr);
//     // Address of age after ibcrement
//     ptr++;
//     printf("Address of age After increment:%u",ptr);
    
//     return 0;
// }

// // case-2:Floating Address  increment

// #include<stdio.h>
// int main(){
//     float price=100.34;
//     float *ptr=& price;
//     // Address of price before increment
//     printf("Address of price before increment:%u\n",ptr);
//     // Address of price after ibcrement
//     ptr++;
//     printf("Address of price After increment:%u",ptr);
    
//     return 0;
// }

// // Case-3:Cherecter  Address increment or decrement 

// #include<stdio.h>
// int main(){
//     char symbol='*';
//     char *ptr=& symbol;
//     // Address of symbol before increment
//     printf("Address of symbol before increment:%u\n",ptr);
//     // Address of symbol after increment
//     ptr++;
//     printf("Address of symbol After increment:%u\n",ptr);
//     // Address of symbol after decrement
//     ptr--;
//     printf("Address of symbol After decrement:%u\n",ptr);
//     return 0;
// }

/* ***NOTE*** :
                1.We can also Subtract one pointer from another pointer 
                2.We can also compare Two pointer
*/
// Eg-
#include<stdio.h>
int main(){
    int age=22;
    int _age=23;
    int *ptr=&age;
    int *_ptr=&_age;
    // compare two pointer 
    printf("Compare:%u\n",ptr ==_ptr);
    // Difference of two pointer 
    printf("Difference:%u\n",ptr - _ptr);
    
    return 0;
}
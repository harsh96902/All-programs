#include<stdio.h>
     // Arithmetic pointer means increment and decrement in pointer 
int main(){
    int i = 7;
    int  *ptr ;
    ptr = &i;
    printf("The address of i is : %u\n",ptr);
    ptr++;
    printf("Now the address of i is : %u",ptr);

    return 0;
}
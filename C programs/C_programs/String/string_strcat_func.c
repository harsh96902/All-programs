#include<stdio.h>
#include<string.h>
int main(){
    char str1[20]="Hello";
    char str2[]="Harsh";
    strcat(str1,str2); // This is a function which is used to concatenate 
                       // two string , means combine two string
    printf("Now the print statement is : %s",str1);

    return 0;
}
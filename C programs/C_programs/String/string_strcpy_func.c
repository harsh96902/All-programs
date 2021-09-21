#include<stdio.h>
#include<string.h>
int main(){
    char *a="Harsh Bhai";
    char b[35];
    strcpy(b,a);  // This function is used to copy the content of 
                  // second string into first string passed to it .  
    printf("Now b is %s",b);

    return 0;
}
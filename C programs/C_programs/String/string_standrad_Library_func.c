#include<stdio.h>
#include<string.h>  // we have to include string header file
int main(){
    char *s = "Harsh bhai";
    int i=strlen(s);   // this is a function which tells the length of the string
    printf("Length of the string is %d",i);
    return 0;
}
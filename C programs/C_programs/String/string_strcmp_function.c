#include<stdio.h>
#include<string.h>
int main(){
    char s1[19] ="Hello";
    char s2[] = "Harsh";
    int c=strcmp(s1,s2);  //This is a function which is used to compare the
// the string like s1 and s2 and if s1=s2 then it will give 0 otherwise 1 and -1  
    printf("The value is : %d",c);

    return 0;
}
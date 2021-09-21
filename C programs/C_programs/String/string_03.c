#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter your name : ");
    scanf("%s",str); // remember that here will be str not &str
    // because its an array and already contain the address

    printf("You have entered name is %s",str);
    return 0;
}
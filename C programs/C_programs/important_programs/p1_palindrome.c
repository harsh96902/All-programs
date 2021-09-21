#include<stdio.h>
// If the reverse of any number is equal to the originbal number then that will
// a palindrome-----------------
int main(){
    int n,i,reverse = 0,digit;
    printf("Enter any number: ");
    scanf("%d",&n);
    i = n;
    while(i!=0){
        digit = i%10;
        reverse = reverse*10 + digit;
        i = i/10;
    }
    // printf("%d",reverse);
    if(reverse == n){
        printf("Yes %d is a palindrome",n);
    }
    else
        printf("%d is not a palindrome",n);
    return 0;
}
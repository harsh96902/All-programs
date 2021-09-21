#include<stdio.h>

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int i = n,digit,a=0;
    while(i!=0){
        digit = i%10;
        i = i/10;
        a++; 
    }
    printf("No. of digit = %d",a);
    return 0;
}
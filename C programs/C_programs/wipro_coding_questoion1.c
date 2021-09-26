#include<stdio.h>

int main(){
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    int i=n;
    int digit;
    int sum  = 0;
    while(i != 0){
        digit = i%10;
        
        if(i%2 == 0){
            sum = sum +digit;
        }
        i = i/10;
    }
    printf("%d",sum);
    return 0;
}
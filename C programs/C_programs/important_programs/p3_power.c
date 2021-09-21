#include<stdio.h>

int main(){
    int n,i,p,power;
    printf("Enter any num: ");
    scanf("%d",&n);
    printf("Enter the power: ");
    scanf("%d",&p);
    i = 1;
    power = n;
    while(i!=p){
        power = power*n;
        i++;
    }
    printf("You get : %d",power);
    return 0;
}
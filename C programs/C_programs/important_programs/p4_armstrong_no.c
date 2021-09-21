#include<stdio.h>
// Armstrong number----------
// The sum of cubes of each digit is equal to the number itself. 
// For example, 153 is an Armstrong numbe
int main(){
    int i,n,d;
    printf("Enter any number: ");
    scanf("%d",&n);
    i = n;
    int sum =0,p;
    while(i!=0){
        d = i%10;
        p = d*d*d;
        sum = sum + p;
        i = i/10;
    }
    printf("Result: %d\n",sum);
    if(sum == n){
        printf("Yes %d is an armstrong nmumber",n);
    }
    else{
        printf("%d is not an armstrong number",n);
    }
    return 0;
}
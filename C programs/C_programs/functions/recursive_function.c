#include<stdio.h>
int factorial(int x);   // Function prototype declaration
int main(){
    int a=5;
    printf("Factorial of the number %d is %d",a,factorial(a));

    return 0;
}
int factorial(int x){
    if(x==1 || x==0){
        return 1;
    }
    else
    {
        return x *  factorial(x-1);
    }
    
}
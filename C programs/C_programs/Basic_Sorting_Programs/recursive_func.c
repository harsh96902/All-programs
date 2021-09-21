#include<stdio.h>
int recursive(int a);
int main(){
    int a,x;
    printf("Enter any number : ");
    scanf("%d",&a);
    x=recursive(a);
    printf("Factorial of %d is %d",a,x);
    return 0;
}
int recursive(int a){
    if(a==1 || a==0){
        return 1;
    }
    else
    {    
        return a*recursive(a-1);
        
    }
    
}


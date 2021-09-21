#include<stdio.h>
int sum(int a,int b);
int main(){
    int c;
    int a=6,b=9;
    printf("The value of a and b before call is %d and %d\n",a,b);
    c = sum(a,b);
    printf("Sum of a and b is :%d\n",c);
    printf("The value of a and b after call is %d and %d\n",a,b);
 // the value will not change because value of a & b copied from main function
 // this is call by value.
    return 0;
}
int sum(int a,int b){
    int c;
    c = a+b;
    a = 5426;   // these values will not have any work
    b = 1155;  // because values of a & b already copied from main func will not change
    return c;
}
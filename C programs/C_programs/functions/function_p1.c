#include<stdio.h>
void sum(int a , int b);
int main(){
    int c;
    c = sum(2,5);
    printf("The value of c is %d ",c);
    return 0;
}
void sum(int a , int b){
    int c;
    c = a + b;
    // return c;
}
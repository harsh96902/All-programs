#include<stdio.h>
int change(int *a);
int main(){
    int x =  5;
   
    change(&x);
    printf("Now the value of x is :%d",x);

    return 0;
}
int change(int *a){
    *a=*a*10;
}

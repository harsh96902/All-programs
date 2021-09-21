#include<stdio.h>

int main(){
    int x=0;
    int a=2;
    int c=1;
    c=(c)?a=0:2;
    printf("%d and %d \n",a,c);
    if(x==0){
        printf("hi");
    }
    else{
        printf("how r u");
        printf("hello");
    }
    return 0;
}
#include<stdio.h>
void xyz(int x);
int main(){
    int a=7;
    int *ptr;
    ptr = &a;
    printf("The value of a  is %d\n",a);
    printf("The address of a  is %u\n",&a);
    // printf("The address of a  is %u\n",ptr);
    // printf("The value of a  is %d\n",*ptr);
    xyz(a);
    return 0;
}
void xyz(int x){
    int a;
    printf("The address of a  is %u\n",&a);
    printf("The value of a  is %d\n",a);
}
#include<stdio.h>
int sum(int a,int b){
    int c;
    c = a+b;
    printf("Sum = %d",c);
    return c;
}
void wrong_swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void right_swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a,b,c;
    printf("Enter any two number: ");
    scanf("%d %d",&a,&b);
    // c = sum(a,b);
    // printf("Sum = %d",c);
    wrong_swap(a,b);
    printf("Wrong swappping now : a= %d, b= %d \n",a,b);
    right_swap(&a,&b);
    printf("Right swapping now : a= %d, b= %d \n",a,b);

    return 0;
}

#include<stdio.h>
void function(int *a,int *b);
int main(){
    int n,c;
    int x=2,y=3;
    function(&x,&y);  // Using pointer we can change the value of x and y
    printf("value of a and b is %d and %d",x,y);

    return 0;
}
void function(int *a,int *b){
    *a = 6;
    *b = 7;
    // int sum=*a+(*b);
    // printf("Sum of a and b is %d",sum);
    // return sum;

}

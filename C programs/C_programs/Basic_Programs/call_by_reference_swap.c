#include<stdio.h>
void wrong_swap(int a, int b);
void swap(int *a,int *b);
// Call by reference means call by address means:
// we can change the value of variable of main function by calling
// that address.
int main(){
    int x=8 , y=4;
    printf("The value of a and b before call %d and %d \n",x,y);
    wrong_swap(x,y); //it will not work because this is call by value 
    printf("The value of a and b after call %d and %d \n",x,y);
    
    printf("Now This is call by reference\n");
    printf("The value of a and b before call %d and %d \n",x,y);
    swap(&x,&y); // it will work because this is call by reference
    printf("The value of a and b after call %d and %d \n",x,y);

    return 0;
}
void wrong_swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}
void swap(int *a,int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

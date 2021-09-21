#include<stdio.h>
int reverse(int marks[]){
    // int marks[10];
    for(int i=7;i>=0;i--){
    printf("The value is : %d\n",marks[i]);

    }
}
int main(){
    int marks[]={1,2,3,4,5,6,7,8,9};
    reverse(marks);
    // for(int i=7;i>0;i--){
    // printf("The value is : %d\n",marks[i]);
    // }
    return 0;
}
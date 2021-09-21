#include<stdio.h>
void display(int stk[],int top){
    for(int i = 0;i<top+1;i++){
        printf("%d ",stk[i]);
    }
}
int insert_elements(int stk[],int top,int data){
    top++;
    stk[top] = data;
    return top;
}
int main(){
    int stk[100];
    int n,num,top = -1;
    printf("Enter the no. of elements you wnat to insert : ");
    scanf("%d",&num);
    printf("Enter the element you want to  insert : ");
    for(int i = 0;i<num;i++){
        scanf("%d",&n);
        top = insert_elements(stk,top,n);
    }
    display(stk,top);
    return 0;
}
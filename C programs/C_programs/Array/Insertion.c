#include<stdio.h>

int main(){
    int n,stk[20],num;
    printf("Enter max no. of elements in the stack : ");
    scanf("%d",&num);
    printf("Enter the elements in the stack : \n");
    for(int i=0;i<num;i++){
        scanf("%d",&stk[i]);
    }       
    printf("All elements in the stack are : ");

    for(int i=0;i<num;i++){
        printf("%d ",stk[i]);
    }
    printf("\nEnter the element you want to insert : ");
    scanf("%d",&n);
    stk[num]=n;
    printf("Insertion  successful : \n");
    for(int i=0;i<num+1;i++){
        printf("%d ",stk[i]);
    }    
    return 0;
}
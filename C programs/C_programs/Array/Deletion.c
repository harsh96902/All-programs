#include<stdio.h>

int main(){
    int n,stk[20];
    printf("Enter 10 elements in the stack : ");
    for(int i=0;i<10;i++){
        scanf("%d",&stk[i]);
    }       
    printf("All elements in the stack are : ");

    for(int i=0;i<10;i++){
        printf("%d ",stk[i]);
    }
    printf("\nEnter the element you want to delete : ");
    scanf("%d",&n);
    printf("Deletion  successful : \n")
    for(int i=0;i<10;i++){
        if(stk[i]==n){
            continue;  // we use it here for skip the iteration
        }
        printf("%d ",stk[i]);
    }    
    return 0;
}
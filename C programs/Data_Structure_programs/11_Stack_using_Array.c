#include<stdio.h>
void IsEmpty(int top){
    if(top == -1){
        printf("Stack is Empty \n");
    }
}
void IsFull(int top,int maxsize){
    if (top == maxsize -1)
    {
        printf("Stack is Full \n");
    }
    
}
void display(int stk[],int top){
    if(top == -1){
        printf("Stack is Empty");
    }
    else{
        printf("Element is :->");
        for (int i = 0; i <= top; i++)
        {
            printf(" %d",stk[i]);
        }
    }
}
int push(int top,int stk[],int maxsize){
    int num;
    if(top == maxsize - 1){
        printf("Stack is full ");
    }
    else{
        printf("Enter the element you want to insert : ");
        scanf("%d",&num);
        top++;
        stk[top] = num;
    }
    return top;
}
int pop(int top,int stk[]){
    if(top == -1){
        printf("Stack is empty");
    }
    else{
        printf("%d is deleted\n",stk[top]);
        top--;
    }
    return top;
}
int main(){
    int maxsize,stk[20],size,ch;
    int top = -1;
    printf("Enter the  maximum size of stack :\n");
    scanf("%d",&maxsize);
    printf("Enter the no. of elements you want to insert : \n ");
    scanf("%d",&size);
    printf("Enter the elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&stk[i]);
        top++;
    }
    // Check this----------------------------
    // do{   // Remember the use of do{}while loop -----
    //     printf("Select the Case:-->\n");
    //     printf("1 : Insertion");
    //     printf("\n2 : Deletion");
    //     printf("\n3 : View");
    //     printf("\n4 : Exit");
    //     printf("\nEnter your choice : ");
    //     scanf("%d",ch);

    //     switch(ch){
    //         case 1: 
    //             top = push(top,stk,maxsize);
    //             display(stk,top);
    //             break;
    //         case 2: 
    //             top = pop(top,stk);
    //             display(stk,top);
    //             break;
    //         case 3: 
    //             display(stk,top);
    //             break;             
    //     }
    // }while(ch != 4);
    // printf("\nThe End");
    // IsEmpty(top);
    // IsFull(top,maxsize);
    // top = push(top,stk,maxsize);
    // display(stk,top);
    top = pop(top,stk);
    display(stk,top);
    return 0;
}
#include<stdio.h>
int isEmpty(int top){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(int top ,int size){
    if(top == size -1){
        return 1;
    }
    else{
        return 0;
    }
}
int push(char val,int top, char stk[],int size){
    if(isFull(top,size)){
        printf("Stack is overflow can not push\n");
    }
    else{
        top++;
        stk[top] = val;
    }
    return top;
}
char pop(int top,char stk[]){
    char val;
    if(isEmpty(top)){
        printf("Stack is empty \n");
        return -1;
    }
    else{
        val = stk[top];
        top--;
        return val;
    }
}
int isOperator(char ch){
    if(ch == '*' || ch == '/' || ch == '+' || ch == '-' ){
        return 1;
    }
    else{
        return 0;
    }
}
int precedence(char ch){
    if(ch == '*' || ch ==  '/'){
        return 3;
    }
    else if(ch == '+' || ch == '-'){
        return 2;
    }
    else {
        return 0;
    }
}
void InfixToPostfix(char infix[]){
    int top = -1;
    int size = 20;
    char stk[20];
    char postfix[20];
    int i = 0, j = 0;
    while(infix[i] != '\0')
    {
        if(!isOperator(infix[i])){
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else{
            if(precedence(infix[i])>precedence(stk[top])){
                push(infix[i],top,stk,size);
                i++;
            }
            else{
                postfix[j]=pop(top,stk);
                j++;
            }
        }    
    }
    while(!isEmpty(top)){
        postfix[j] = pop(top,stk);
        j++;
    }
    postfix[j] = '\0';
    printf("%s",postfix);
    // return postfix;
}
int main(){
    char infix[] = "x-y/z-k*d";
    InfixToPostfix(infix); 
    // printf("Covert Infix To Postfix %s",InfixToPostfix(infix));
    return 0;
}
#include<stdio.h>
void display(int arr[],int b,int f){
    for(int i = f+1;i<=b;i++){
        printf("Element is %d\n",arr[i]);
    }
}
int enqueue(int arr[],int size,int b,int val,int f){
    if((b+1)%size == f){
        printf("Queue is overflow\n");
    }
    else{
        b = (b+1)%size; // -------> Remember this circular movement formula
        arr[b] = val;
        printf("Enqueue element is %d\n",val);
    }
    return b;        
}
int dequeue(int arr[],int b,int f){
    if(b == f){
        printf("Queue is empty");
    }
    else{
        f=f+1;
        printf("Dequeue elemet is %d\n",arr[f]);
        return f;
    }
}
int main(){
    int size = 30;
    int b=-1;
    int f= -1;
    int arr[30];
    b = enqueue(arr,size,b,8,f);
    b = enqueue(arr,size,b,9,f);
    b = enqueue(arr,size,b,23,f);
    f = dequeue(arr,b,f);
    // f = dequeue(arr,b,f);
    b = enqueue(arr,size,b,27,f);
    // f = dequeue(arr,b,f);
    display(arr,b,f);
    return 0;
}
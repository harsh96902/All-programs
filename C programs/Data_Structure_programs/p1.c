#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int b;
    int f;
    int *arr;
};
struct queue *q;

void display(){
    for(int i = q->f+1;i<=q->b;i++){
        printf("Elements is %d \n",q->arr[i]);
    }
}
void enqueue(int val){
    if(q->b == q->size-1){
        printf("Queue is full ");
    }
    else{
        // ptr->b=ptr->b+1;
        q->b++;
        q->arr[q->b] = val;
        printf("Enqueue element is %d\n",val);
    }
}
int dequeue(){
    int a = -1;
    if (q->b == q->f)
    {
        printf("Queue is Empty");
    }
    else{
        q->f=q->f+1;
        a = q->arr[q->f];
    }
    return a;
}
int main(){
    q->size = 100;
    q->b = q->f = -1;
    q->arr = (int*)malloc(q->size*sizeof(int)); 
    enqueue(4);
    enqueue(5);
    enqueue(7);
    // printf(" Dequeue element is %d\n",dequeue(&q));
    display(q);  
    return 0;
}
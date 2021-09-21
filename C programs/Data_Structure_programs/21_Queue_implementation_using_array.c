#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int b;
    int f;
    int *arr;
};
void display(struct queue *ptr){
    for(int i = ptr->f+1;i<=ptr->b;i++){
        printf("Elements is %d \n",ptr->arr[i]);
    }
}
void enqueue(struct queue *q,int val){
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
int dequeue(struct queue *ptr){
    int a = -1;
    if (ptr->b == ptr->f)
    {
        printf("Queue is Empty");
    }
    else{
        ptr->f=ptr->f+1;
        a = ptr->arr[ptr->f];
    }
    return a;
}
int main(){
    struct queue q;
    q.size = 100;
    q.b = q.f = -1;
    q.arr = (int*)malloc(q.size*sizeof(int));
    enqueue(&q , 4);
    enqueue(&q , 5);
    enqueue(&q , 7);
    // printf(" Dequeue element is %d\n",dequeue(&q));
    display(&q);

    
    return 0;
}
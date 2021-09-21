#include<stdio.h>
void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int deletion(int arr[],int size,int capacity,int index){
    for (int i = index; i <size-1; i++)
    {
        arr[i] = arr[i+1];
    }
       return 1;  // return 1 here means that process successful 
}
int main(){
    int arr[100]={2,6,8,4,9};
    int size=5,index=3;
    display(arr,size);
    deletion(arr,size,100,index);
    size-=1;  // means size = size+1
    display(arr,size);

    return 0;
}
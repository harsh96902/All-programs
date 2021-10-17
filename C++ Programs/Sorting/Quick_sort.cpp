#include<iostream>
using namespace std;
int partition(int A[], int low , int high){
    int pivot = A[low];
    int p = low + 1;
    int q = high;
    do{
        while(A[p] <= pivot){
            p++;
        }
        while(A[q] > pivot){
            q--;
        }
        if(p<q){
            swap(A[p] ,A[q]);
        }
    }while(p<q); 
    swap(A[q] , A[low]);
    return q;
}
void quicksort(int A[] , int low , int high){
    int partition_index;
    if(low<high){

        partition_index = partition(A , low ,high);

        quicksort(A, low,partition_index - 1);
        quicksort(A, partition_index + 1, high);
    }
}
void display(int A[] , int n){
    cout<<"Sorted elements : ";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    int A[10] = {10,6,9,8,7,2,5,1};
    quicksort(A , 0 , 7);
    display(A,8);
}
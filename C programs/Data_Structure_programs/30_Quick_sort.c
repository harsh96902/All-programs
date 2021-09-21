#include<stdio.h>
// In the quick sort, we will take low element as pivort and set it on 
// the deservable  position in the array. Then, There will be partition in the
// array of left side and the right side element from set position pivort 
//  this process repeat again and again until all the element doesn't  set
// on their deservable position and finally the array will be sort.
void printArray(int A[],int n){
    for(int i =0;i < n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
int partition(int A[],int low ,int high){
    int pivot = A[low];
    int i =  low+1;
    int j = high;
    do{
        while(A[i]<=pivot){
            i++;
        }
        while(A[j]>pivot){
            j--;
        }
        if(i<j){
            int temp = A[j];
            A[j] = A[i];
            A[i] = temp;
        }
    }while(i<j);

    int temp = A[j];
    A[j] = A[low];
    A[low] = temp;   
    return j;


}
void quicksort(int A[],int low,int high){
    int partition_index;
    if(low<high){
        partition_index = partition(A,low,high); // set the position of low
        // printArray(A,8);
        quicksort(A,low,partition_index - 1); //for partition on left subarray
        quicksort(A,partition_index+1,high); // for partition on right subarray 
    }
}
int main(){
    int A[] = {10,6,9,8,7,2,5,1};
    int n = 8;
    quicksort(A,0,n-1);
    printArray(A,n);
    return 0;
}
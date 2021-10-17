// pseudocode--->
                    //  A[] = { 2 , 6 , 7, 9 ,1 , 5  }
                    //          p                 r
// partition(A[] , p , r)
// pivot = A[r]
//    i = p-1
//    for j=p to r-1
//       if(A[j] <= pivot)
//          i = i+1;
//          A[j] <-> A[i]
//    A[i+1] <-> A[r]
//    return i+1

// quicksort(A[] , p , r)
//  q = partition(A[] , p , r)    q is the index of pivot
//  quicksort(A, p , q-1)  for left partion
//  quicksort(A , q+1, r )  for right partition


// Source code -->
#include<iostream>
using namespace std;
partition(int A[] , int p , int r){
    int pivot = A[r];
    int i = p-1;
    for(int j =0; j<=r-1 ; j++){
        if(A[j] <= pivot){
            i = i+1;
            swap(A[i] , A[j]);
        }
    }
    swap(A[i+1] , A[r]);
    return i+1;   // deservable index of pivot element
}
quicksort(int A[] , int p , int r){

    if(p<r){
        int q = partition(A , p , r);  // pivot index
        quicksort(A , p , q-1);   // for left partion
        quicksort(A , q+1 , r);    // for right partition
    }
}
void display(int A[] , int n){
    cout<<"Sorted : ";
    for(int i=0 ; i<n ; i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    int A[10] = {3,6,7,88,3,38,3};
    quicksort(A , 0 , 6);
    display(A , 7);
    
}
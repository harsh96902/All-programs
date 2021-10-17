#include<iostream>
using namespace std;
void InsertionSort(int arr[], int n){
    for(int i=1;i<n;i++){     // traverse all the elements one by one from second elemnt
        int key = arr[i];     // this is key element for which we will find the right position
        int j = i-1;          // we will check the position at the left side of i
        while(j>=0 && (arr[j] > key)){   // check the conditions
            arr[j+1] = arr[j];   // shift the element upto condition satisfied 
            j--;1
        }
        arr[j+1] = key;     // now, we got the right position of j+1 for the key elements.
    }
    cout<<"Sorted : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // cout<<"length of array is :"<<sizeof(arr)/sizeof(arr[0]);    
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    InsertionSort(arr,n);

}
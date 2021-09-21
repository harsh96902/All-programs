#include<stdio.h>
void printArray(int arr[], int n){
    for(int i =0; i<n;i++){
        printf(" %d ",arr[i]);
    }
}
// *******This program is created by me but it has high time complexity*****
void insertion_Sort(int arr[], int n){
    for(int i = 1;i < n;i++){
        for(int j = 0;j < i;j++){
            if(arr[j]>arr[i]){
                for(int k = i;k > j;k--){
                    int temp = arr[k];
                    arr[k] = arr[k-1];
                    arr[k-1] = temp;
                }
            }
        }
    }
}
int main(){
    int arr[] = {3,5,1,7,6,9,2};
    int size = 7;
    insertion_Sort(arr,size);
    printArray(arr,size);
    return 0;
}
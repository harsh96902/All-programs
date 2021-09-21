#include<stdio.h>
void printArray(int arr[], int n){
    for(int i =0; i<n;i++){
        printf(" %d ",arr[i]);
    }
}
void selection_sort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {6,8,2,4,9,1,3};
    int size =7;
    selection_sort(arr,size);
    printArray(arr,size);
    return 0;
}
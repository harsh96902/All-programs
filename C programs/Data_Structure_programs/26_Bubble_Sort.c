#include<stdio.h>
void printArray(int arr[], int n){
    for(int i =0; i<n;i++){
        printf(" %d ",arr[i]);
    }
}
void bubble_sort(int arr[],int n){
    for(int i = 0 ; i < n-1; i++){  //  This is used for  the no of pass
        for(int j = 0 ; j < n-1-i; j++){  // Here -i is used for no unwanted
            if(arr[j]>arr[j+1]){         // check bcz element will sort from
                int temp = arr[j];   // the last so time complexity will increase
                arr[j] = arr[j+1];  // if we will not do so.
                arr[j+1] = temp;
            }
        }
    } 
}
int main(){
    int arr[] = {3,7,1,5,9,4,6};
    int size = 7;
    bubble_sort(arr,size);
    printArray(arr,size);
    return 0;
}
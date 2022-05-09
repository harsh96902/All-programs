#include<stdio.h>
int getMax(int arr1[], int m){
    int max = 0;
    for(int i=0;i<m;i++){
        if(arr1[i] > max){
            max = arr1[i];
        }
    }
    return max;
}
int getMin(int arr2[], int n){
    int min=arr2[0];
    for(int i=0;i<n;i++){
        if(arr2[i] < min){
            min = arr2[i];
        }
        
    }
    return min;
}
int main(){
    int arr1[100] = {1,5,78,4,7};
    int arr2[100] ={4,2,5,67,2,7};
    printf("%d",getMin(arr2,6));
}
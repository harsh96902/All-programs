#include<iostream>
using namespace std;
struct Pair{
    int min;
    int max;
};
struct Pair getminmax(int arr[],int n){
    struct Pair minmax;
    if(n==1){
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }

    if(arr[0]>arr[1]){
        minmax.min = arr[1];
        minmax.max = arr[0];
    }
    else{
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
    for(int i=2;i<n;i++){
        if(arr[i]<minmax.min){
            minmax.min = arr[i];
        }
        else if(arr[i]>minmax.max){
            minmax.max = arr[i];
        }
        
    }
    return minmax;

}
int main(){
    int arr[] ={12,32,23,121,332,233,666};
    int size = 7;
    struct Pair minmax = getminmax(arr,size);
    cout<<"Minimum in array is :--->> "<<minmax.min<<endl;
    cout<<"Maximum in array is :--->> "<<minmax.max;

}
#include<iostream>
using namespace std;
void reverse_array(int arr[],int start,int end){
    if(start>end){
        return;
    }
    else{
        while(end>start){
            int temp;
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}
void reverse_string(char str[],int start,int end){
    if(start>end){
        return;
    }
    else{
        while(end>start){
            int temp;
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }
}
int main(){
    int  arr[] =  {1,4,6,74,3,6};
    char str[] ="Harsh kumar";
    int a = sizeof(arr)/sizeof(arr[0]);
    int b = sizeof(str)/sizeof(str[0]);
    reverse_array(arr,0,a-1);
    reverse_string(str,0,b-2);
    for(int i=0;i<b;i++){
        // cout<<arr[i]<<" ";
        cout<<str[i];
    }   
    
    
}
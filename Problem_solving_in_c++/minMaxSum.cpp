#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i =0;i<5;i++){
        cin>>arr[i];
    }
    int sum[5];
    for(int i = 0;i<5;i++){
        sum[i] = 0;
        for(int j=0;j<5;j++){
            if(arr[j]!=arr[i]){
                sum[i] = sum[i] + arr[j];
            }
        }
    }
    for(int i =0;i<5;i++){
        cout<<sum[i]<<" ";
    }
    int temp;
    for(int i=0;i<4;i++){
        for(int j =0;j<4;j++){
            if(sum[j] > sum[j+1]){
                temp = sum[j];
                sum[j] = sum[j+1];
                sum[j+1] = temp; 
            }
        }
    }
    cout<<endl<<sum[0]<<" "<<sum[4];
}
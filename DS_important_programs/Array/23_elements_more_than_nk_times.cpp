#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        cout<<"Enter the value of  k--> ";
        cin>>k;
        int x = n/k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int temp = arr[0];
        int count = 1;
        int y =1;
        for(int i=1;i<n;i++){
            if(arr[i] == temp){
                count++;
                if(count > x && y == 1){
                    cout<<arr[i]<<" ";
                    y =2;
                }
            }
            else{
                y = 1;
                temp = arr[i];
                count = 1;
            }

        }
    }
    
}
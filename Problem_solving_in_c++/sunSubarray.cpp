#include<iostream>
using namespace std;

void sumSubarray(int n,int s,int arr[]){
    for(int i=0;i<n;i++){
        int a=0,b,j=i;
        if(arr[j]==s){
            cout<<j+1;
            break;
        }
        else{
            while(a!=s){
                a = a + arr[j];
                if(a>s){
                    break;
                }
                else if(a==s){
                    cout<<i+1<<" "<<j+1;
                }
                j++;
                
            }
        }
    }
}

int main(){
    
    int n , s;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Sum : ";
    cin>>s;
    cout<<"Fill the array :-->>"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your array -->> ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sumSubarray(n,s,arr);
}
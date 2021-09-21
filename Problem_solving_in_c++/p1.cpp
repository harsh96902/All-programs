#include<iostream>
using namespace std;

int main(){
	int t,arr[100],n,sum[100],digit;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>arr[i];
        n = arr[i];
        sum[i] = 0;
        while(n!=0){
            digit = n%10;
            sum[i]=sum[i] + digit; 
            n = n/10;
        }   
    }
	for(int i=0;i<t;i++){
	    cout<<sum[i]<<endl;
	    
	}
	
	return 0;
}

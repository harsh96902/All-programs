#include <iostream>
using namespace std;
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        return n * fact(n-1);
    }
    
}
int main() {
	long t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    cout<<fact(n)<<endl;
	}
	return 0;
}
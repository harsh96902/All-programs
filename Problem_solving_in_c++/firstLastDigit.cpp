#include <iostream>
using namespace std;

int main() {
	int t,n,first, last;
	cin>>t;
	while(t--){
		// first =0,last =0;
	    cin>>n;
	    last = n%10;
	    while(n>0){
	        first = n%10;
	        n = n/10;
	    }
	    cout<<first + last<<endl;
	}
	return 0;
}
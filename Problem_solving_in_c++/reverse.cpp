#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int  digit,reverse = 0;
	    while(n!=0){
	        digit = n%10;
	        reverse = reverse *10 + digit;
	        n = n/10;
	    }
	    cout<<reverse<<endl;
	}
	return 0;
}
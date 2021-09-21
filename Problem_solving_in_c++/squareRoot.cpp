#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t,n,l;
	
	cin >> t;
	while(t!=0 && t<=20){
	    cin >> n;
	    cout << floor(sqrt(n)) << endl;
	    t--;
	}
	return 0;
}

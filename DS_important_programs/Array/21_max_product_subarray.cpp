// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long final_product = arr[0];
	    long long temp_product;
	    for(long long i=0;i<n;i++){
	        temp_product = arr[i];
	        for(long long j=i+1;j<n;j++){
	            temp_product = temp_product * arr[j];
	            if(temp_product > final_product){
	                final_product = temp_product;
	            }
	        }
	        final_product = max(temp_product,final_product);
	    }
	    return final_product;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int>> arr, int n, int m) {
	    // code here
	    int final_count = 0;
	    int z = 0,x=0;
	    for(int i=0;i<arr.size();i++){
	        int temp_count = 0;
	        for(int j=0;j<arr[i].size();j++){
	            if(arr[i][j] == 1){
	                temp_count++;
	                if(temp_count > final_count){
	                    final_count = temp_count;
	                    z = i;
	                    x = 1;
	                }
	            }
	        }
	    }
	    if(x != 1 && z==0){
	        return -1;
	    }
	    return z;
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        // sort the array for getting first and last  element
        sort(arr,arr+n);
        
        // 
        int min_num;
        int max_num;
        
        // this  will be  our  initial result
        int result = arr[n-1] - arr[0];
        
        for(int i=1;i<n;i++){
            if(arr[i]>=k && arr[n-1]>=k){
                // arr[0] + k will be our initial min_num
                // if arr[i] - k is min then update min_num 
                min_num = min(arr[0]+k,arr[i]-k);
                
                // arr[n-1]-k will be our initial max_num
                // if arr[i-1] + k is max  then update max_num
                max_num = max(arr[n-1]-k,arr[i-1] + k);
                
                result =min(result ,  max_num - min_num);
                
            }
        }
        return result;
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
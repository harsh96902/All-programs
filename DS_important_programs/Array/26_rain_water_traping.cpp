#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        // Code here
        int res = 0;
     
    // For every element of the array
        for (int i = 1; i < n-1; i++) {
         
        // Find the maximum element on its left
            int left = arr[i];
            for (int j=0; j<i; j++)
                left = max(left, arr[j]);
         
        // Find the maximum element on its right  
            int right = arr[i];
            for (int j=i+1; j<n; j++)
                right = max(right, arr[j]);
        
       // Update the maximum water   
            res = res + (min(left, right) - arr[i]);  
        }
    return res;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
}  // } Driver Code Ends
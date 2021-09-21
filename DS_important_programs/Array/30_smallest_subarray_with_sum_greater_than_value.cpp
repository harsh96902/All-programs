#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    int sb(int arr[], int n, int x)
    {
        // Your code goes here   
        int min_length = n+1;
        for(int i=0;i<n;i++){
            
            int sum = arr[i];
            if(sum>x){
                return 1;
            }
            for(int j=i+1;j<n;j++){
                sum = sum + arr[j];
                if(sum > x && min_length > (j-i +1) ){
                    min_length = j-i+1;
                }
            }
        }
        return min_length;
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.sb(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends
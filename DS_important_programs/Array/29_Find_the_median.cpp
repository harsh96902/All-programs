// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    int n = v.size();
		    int x = n/2;
            int p = v[n/2 -1];
		//    int y = n%2;
            
		    if(n%2 == 0){
		        int z;
                
                z = v[x];
                z = z + p;
		        z = z/2;
                // cout<<p<<endl;
		        return z;
		    }
		    else{
		        return v[x];
		    }
		    
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}
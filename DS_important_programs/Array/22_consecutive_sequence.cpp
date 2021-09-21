// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        
      //Your code here
        sort(arr,arr+N);
        int temp_num = 0;
        int final = 0;
        int arr1[N];
        arr1[0] = arr[0];
        int  y=1;
        // insert repeated elements only once in the array
        for(int i=1;i<N;i++){
            if(arr[i] != arr[i-1]){
                arr1[y] = arr[i];
                y++;
            }
        }
        for(int k=0;k<y;k++){
            cout<<arr1[k]<<" ";
        }
        cout<<endl;
        for(int i=0;i<y;i++){
            if(arr1[i] == arr1[i-1] + 1){
                temp_num++;
            }
            else{
                temp_num = 1;
            }
            if(temp_num>final){
                final =  temp_num;
            }
            
        }
        // if(x!=1){
        //     final = temp_num;
        // }
      return final;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
    int  t,n,i,a[100001];
    cin>>t;
    while(t--)
    {
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    Solution obj;
    cout<<obj.findLongestConseqSubseq(a, n)<<endl;
    }
      
    return 0;
}  // } Driver Code Ends
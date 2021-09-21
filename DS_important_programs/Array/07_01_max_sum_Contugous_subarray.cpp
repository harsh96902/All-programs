#include<iostream>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int  max = arr[0];
        for(int i=1;i<=n;i++){  // this loop will check  element like the  ways-->
        // firstly checking single elements  then check double element's sum
        // and it will check  upto nth elements sum
            for(int j=0;j<=n-i;j++){  // this loop is used to check 
                int sum=0;
                int x = i+j;
                for(int k=j;k<x;k++){   
                    sum = sum + arr[k];   
                    if(sum > max){
                        max = sum;
                    }
                }
                // cout<<sum<<endl;
            }
        }
        return max;
        
    }
};
int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

#include<iostream>
using namespace std;

class Solution{
    public:
    int maxSubarraySum(int arr[], int n){
        int  max = arr[0];
        for(int i=0;i<n;i++){  
            for(int j=i;j<n;j++){
                int sum =0;
                for(int k=i;k<=j;k++){
                    sum = sum + arr[k];
                }
                if(sum > max){
                    max = sum;
                }
            }
        }
        return max;
    }
};
int main()
{
    int t,n;
    
    cin>>t; 
    while(t--)
    {
        
        cin>>n;
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}